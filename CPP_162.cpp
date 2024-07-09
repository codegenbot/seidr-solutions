#include <iostream>
#include <string>
#include <openssl/evp.h>
#include <openssl/hmac.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    EVP_MD_CTX mdctx;
    unsigned char result[EVP_MAX_MD_SIZE];
    unsigned int len = 0;

    EVP_DigestInit_ex(&mdctx, EVP_md5(), NULL);
    EVP_DigestUpdate(&mdctx, text.c_str(), text.size());
    EVP_DigestFinal_ex(&mdctx, result, &len);

    string md5hash;
    for (int i = 0; i < len; ++i) {
        char buffer[3];
        sprintf(buffer, "%02x", result[i]);
        md5hash += buffer;
    }

    return md5hash;
}