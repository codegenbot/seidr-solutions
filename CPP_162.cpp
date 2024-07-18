#include <string>
#include <openssl/md5.h>
#include <openssl/evp.h>

#define MD5_DIGEST_LENGTH 16

using namespace std;

string string_to_md5(const string& text) {
    if (text.empty()) {
        return "None";
    }

    unsigned char digest[MD5_DIGEST_LENGTH];
    EVP_MD_CTX* ctx = EVP_MD_CTX_new();
    EVP_DigestInit(ctx, EVP_md5());
    EVP_DigestUpdate(ctx, text.c_str(), text.length());
    EVP_DigestFinal(ctx, digest, NULL);
    EVP_MD_CTX_free(ctx);

    char mdString[33];
    for (int i = 0; i < 16; i++) {
        sprintf(&mdString[i*2], "%02x", (unsigned int)digest[i]);
    }

    return string(mdString);
}