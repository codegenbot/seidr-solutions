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
    EVP_MD_CTX* ctx;
    ctx = EVP_MD_CTX_new();
    EVP_DigestInit_ex(ctx, EVP_md5(), nullptr);
    EVP_DigestUpdate(ctx, text.c_str(), text.size());
    EVP_DigestFinal_ex(ctx, digest, nullptr);
    EVP_MD_CTX_free(ctx);

    char mdString[(MD5_DIGEST_LENGTH * 2) + 1];
    for (int i = 0; i < MD5_DIGEST_LENGTH; ++i) {
        sprintf(&mdString[i * 2], "%02x", (unsigned int)digest[i]);
    }
    mdString[MD5_DIGEST_LENGTH * 2] = '\0';

    return string(mdString);
}