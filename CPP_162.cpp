#include <stdio.h>
#include <string>
#include <openssl/evp.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) {
        return "None";
    }

    EVP_MD_CTX* ctx = EVP_MD_CTX_new();
    EVP_DigestInit_ex(ctx, EVP_md5(), NULL);
    EVP_DigestUpdate(ctx, text.c_str(), text.size());

    unsigned char digest[EVP_MAX_MD_SIZE];
    unsigned int digest_length;
    EVP_DigestFinal_ex(ctx, digest, &digest_length);
    EVP_MD_CTX_free(ctx);

    char md5Hash[2 * digest_length + 1];
    for (int i = 0; i < digest_length; i++) {
        sprintf(&md5Hash[i * 2], "%02x", digest[i]);
    }

    return string(md5Hash);
}