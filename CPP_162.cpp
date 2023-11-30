#include <stdio.h>
#include <string>
#include <openssl/md5.h>
#include <openssl/evp.h>
using namespace std;

string string_to_md5(string text) {
    if (text.empty()) {
        return "None";
    }

    EVP_MD_CTX* ctx;
    const EVP_MD* md;
    unsigned char digest[MD5_DIGEST_LENGTH];

    md = EVP_md5();
    ctx = EVP_MD_CTX_new();

    EVP_DigestInit_ex(ctx, md, NULL);
    EVP_DigestUpdate(ctx, text.c_str(), text.length());
    EVP_DigestFinal_ex(ctx, digest, NULL);

    EVP_MD_CTX_free(ctx);

    char md5String[33];
    for (int i = 0; i < 16; i++) {
        sprintf(&md5String[i * 2], "%02x", (unsigned int)digest[i]);
    }

    return string(md5String);
}