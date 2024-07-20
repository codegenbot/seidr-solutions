#include <openssl/evp.h>

string string_to_md5(string text) {
    if (text.empty()) return "None";

    unsigned char md5[16];
    unsigned char* ptr = NULL;
    EVP_MD_CTX mdctx;
    EVP_PKEY* pkey = NULL;

    EVP_MD_CTX_init(&mdctx);
    EVP_DigestInit_ex(&mdctx, EVP_md5(), NULL);

    const char* ctext = text.c_str();
    size_t len = text.size();

    EVP_DigestUpdate(&mdctx, ctext, len);

    EVP_DigestFinal_ex(&mdctx, md5, &ptr);

    string result;
    for (int i = 0; i < 16; ++i) {
        char buff[3];
        sprintf(buff, "%02x", md5[i]);
        result += buff;
    }

    EVP_MD_CTX_cleanup(&mdctx);
    OPENSSL_free(ptr);

    return result;
}