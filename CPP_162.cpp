#include <stdio.h>
#include <string>
#include <openssl/evp.h>
using namespace std;

string string_to_md5(string text) {
    if (text.empty()) {
        return "None";
    }

    unsigned char digest[EVP_MAX_MD_SIZE];
    unsigned int digestLength;
    EVP_MD_CTX* md_ctx = EVP_MD_CTX_new();
    EVP_DigestInit(md_ctx, EVP_md5());
    EVP_DigestUpdate(md_ctx, text.c_str(), text.length());
    EVP_DigestFinal(md_ctx, digest, &digestLength);
    EVP_MD_CTX_free(md_ctx);

    char md5String[33];
    for (unsigned int i = 0; i < digestLength; i++) {
        sprintf(&md5String[i*2], "%02x", (unsigned int)digest[i]);
    }

    return string(md5String);
}