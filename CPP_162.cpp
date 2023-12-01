#include <stdio.h>
#include <string>
#include <openssl/md5.h>
#include <openssl/evp.h>
using namespace std;

string string_to_md5(string text) {
    if (text.empty()) {
        return "None";
    }

    unsigned char digest[MD5_DIGEST_LENGTH];
    EVP_MD_CTX* mdctx = EVP_MD_CTX_new();
    EVP_MD_CTX_init(mdctx);
    EVP_DigestInit(mdctx, EVP_md5());
    EVP_DigestUpdate(mdctx, text.c_str(), text.length());
    EVP_DigestFinal(mdctx, digest, nullptr);
    EVP_MD_CTX_free(mdctx);

    char md5hash[33];
    for(int i = 0; i < 16; i++) {
        sprintf(&md5hash[i*2], "%02x", (unsigned int)digest[i]);
    }

    return md5hash;
}