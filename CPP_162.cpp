#include <openssl/evp.h>

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char md5[16];
    EVP_MD_CTX mdctx;
    EVP_MD *md = EVP_md5();
    const void *d = text.c_str();
    size_t len = text.size();

    EVP_DigestInit_ex(&mdctx, md, NULL);
    EVP_DigestUpdate(&mdctx, d, len);
    EVP_DigestFinal_ex(&mdctx, md5, NULL);

    string result;
    for (int i = 0; i < 16; i++) {
        char buf[3];
        sprintf(buf, "%02x", md5[i]);
        result += buf;
    }

    return result;
}