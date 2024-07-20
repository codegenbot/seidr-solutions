#include <openssl/evp.h>

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char md[16];
    unsigned int length = 0;
    EVP_MD_CTX md_ctx;

    const EVP_MD *md_alg = EVP_md5();
    const EVP_PKEY *pkey = NULL;

    if (!EVP_DigestInit_ex(&md_ctx, md_alg, NULL))
        return "";

    if (!EVP_DigestUpdate(&md_ctx, text.c_str(), text.size()))
        return "";

    EVP_DigestFinal_ex(&md_ctx, md, &length);
    string result;
    for (int i = 0; i < length; ++i) {
        sprintf(result + strlen(result), "%02x", md[i]);
    }
    return result;
}