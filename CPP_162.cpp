#include <stdio.h>
#include <string>
#include <openssl/evp.h>
#include <openssl/md5.h>
using namespace std;

string string_to_md5(string text) {
    if (text.empty()) {
        return "None";
    }

    unsigned char digest[MD5_DIGEST_LENGTH];
    EVP_MD_CTX* context = EVP_MD_CTX_new();
    EVP_DigestInit_ex(context, EVP_md5(), NULL);
    EVP_DigestUpdate(context, text.c_str(), text.length());
    EVP_DigestFinal_ex(context, digest, NULL);
    EVP_MD_CTX_free(context);

    char md5hash[2 * MD5_DIGEST_LENGTH + 1];
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        sprintf(&md5hash[i * 2], "%02x", (unsigned int)digest[i]);
    }

    return md5hash;
}