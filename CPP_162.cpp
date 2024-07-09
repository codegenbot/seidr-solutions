#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <openssl/ssl.h>
#include <openssl/evp.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "None";

    EVP_MD_CTX md;
    EVP_MD_CTX_init(&md);
    unsigned char result[MD5_DIGEST_LENGTH];

    EVP_DigestInit_ex(EVP_get_defaultdigest(), NULL, NULL, &md);
    EVP_DigestUpdate(&md, text.c_str(), text.size());
    unsigned char mdValue[16];
    EVP_DigestFinal_ex(&md, mdValue, NULL);
    for(int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        stringstream ss;
        ss << setfill('0') << setw(2) << hex << (int)mdValue[i];
        text += ss.str();
    }

    return text;
}