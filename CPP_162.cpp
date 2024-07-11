#include <iostream>
#include <string>
#include <sstream>
#include <openssl/evp.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char result[MD5_DIGEST_LENGTH];
    EVP_MD_CTX* mdctx = EVP_MD_CTX_create();
    EVP_DigestInit_ex(mdctx, EVP_sha1(), NULL);
    const char* in = text.c_str();
    size_t len = text.length();
    EVP_DigestUpdate(mdctx, in, len);
    unsigned char* out = result;
    size_t out_len;
    EVP_DigestFinal_ex(mdctx, out, &out_len);

    stringstream ss;
    ss << hex << setfill('0') << fixed << setw(2);
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        ss << static_cast<int>(result[i]);
    }

    string str = ss.str();
    EVP_MD_CTX_destroy(mdctx);
    return str;
}