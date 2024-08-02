#include <openssl/evp.h>
#include <string>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char buffer[1024];
    string result;
    EVP_MD_CTX mdctx;
    EVP_MD *md = NULL;
    const EVP_MD* digest = NULL;
    unsigned char hash[16];

    EVP_MD_CTX_init(&mdctx);

    if ((digest = EVP_get_digestbyname("MD5")) == NULL) {
        return "";
    }

    if (1 != EVP_DigestInit_ex(&mdctx, digest, NULL)) {
        return "";
    }

    const char *p = text.c_str();
    size_t len = text.length();
    if ((len > sizeof(buffer) - 1) || (1 != EVP_DigestUpdate(&mdctx, p, len))) {
        return "";
    }

    if (1 != EVP_DigestFinal_ex(&mdctx, hash, NULL)) {
        return "";
    }

    for(int i = 0; i < 16; ++i) {
        char buffer[3];
        sprintf(buffer, "%02x", hash[i]);
        result.append(buffer);
    }

    EVP_MD_CTX_cleanup(&mdctx);

    return result;
}