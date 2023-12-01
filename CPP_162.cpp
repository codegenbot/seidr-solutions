#include <stdio.h>
#include <string>
#include <openssl/evp.h>
using namespace std;

string string_to_md5(string text) {
    if (text.empty()) {
        return "None";
    }

    OpenSSL_add_all_algorithms();
    EVP_MD_CTX* mdctx = EVP_MD_CTX_new();
    EVP_DigestInit_ex(mdctx, EVP_md5(), NULL);
    EVP_DigestUpdate(mdctx, text.c_str(), text.length());
    
    unsigned char digest[EVP_MAX_MD_SIZE];
    unsigned int len = 0;
    EVP_DigestFinal_ex(mdctx, digest, &len);
    EVP_MD_CTX_free(mdctx);

    char md5hash[2 * len + 1];
    for (int i = 0; i < len; i++) {
        sprintf(&md5hash[i * 2], "%02x", (unsigned int)digest[i]);
    }

    return md5hash;
}