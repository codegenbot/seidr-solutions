#include <stdio.h>
#include <string>
#include <openssl/md5.h>
#include <openssl/evp.h>
using namespace std;

string string_to_md5(string text) {
    if (text.empty()) {
        return "None";
    }

    EVP_MD_CTX* md_ctx = EVP_MD_CTX_new();
    EVP_DigestInit_ex(md_ctx, EVP_md5(), NULL);
    EVP_DigestUpdate(md_ctx, text.c_str(), text.length());

    unsigned char digest[MD5_DIGEST_LENGTH];
    EVP_DigestFinal_ex(md_ctx, digest, NULL);

    EVP_MD_CTX_free(md_ctx);

    char md5hash[33];
    for(int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        sprintf(&md5hash[i*2], "%02x", (unsigned int)digest[i]);
    }

    return string(md5hash);
}