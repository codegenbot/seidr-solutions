#include <stdio.h>
#include <string>
#include <openssl/evp.h>
using namespace std;

string string_to_md5(string text) {
    if (text.empty()) {
        return "None";
    }

    EVP_MD_CTX* mdctx;
    mdctx = EVP_MD_CTX_new();
    EVP_DigestInit_ex(mdctx, EVP_md5(), NULL);
    EVP_DigestUpdate(mdctx, (unsigned char*)text.c_str(), text.length());

    unsigned char md5Digest[EVP_MAX_MD_SIZE];
    unsigned int md5DigestLen;
    EVP_DigestFinal_ex(mdctx, md5Digest, &md5DigestLen);

    EVP_MD_CTX_free(mdctx);

    char md5String[33];
    for (int i = 0; i < md5DigestLen; i++) {
        sprintf(&md5String[i*2], "%02x", (unsigned int)md5Digest[i]);
    }

    return string(md5String);
}