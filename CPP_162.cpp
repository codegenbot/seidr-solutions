#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <openssl/evp.h>
#include <openssl/md5.h>

using namespace std;

const int MD5_DIGEST_LENGTH = 16;

string string_to_md5(string text) {
    if (text.empty()) return "None";

    const EVP_MD_CTX *md;
    md = EVP_MD_CTX_new();
    unsigned char result[MD5_DIGEST_LENGTH];

    EVP_DigestInit_ex(md, EVP_md5(), NULL);
    EVP_DigestUpdate(md, (unsigned char*)text.c_str(), text.size());
    unsigned char *digest = (unsigned char *)OPENSSL_malloc(MD5_DIGEST_LENGTH);
    EVP_DigestFinal_ex(md, digest, NULL);

    stringstream ss;
    for(int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        ss << setfill('0') << setw(2) << hex << (int)digest[i];
    }

    OPENSSL_free(digest); 

    EVP_MD_CTX_free(md);
    return ss.str();
}