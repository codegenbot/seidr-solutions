#include <openssl/evp.h>

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char md[16];
    unsigned char* ptr = NULL;
    EVP_MD_CTX ctx;
    EVP_PKEY *pkey = EVP_pkey_new();
    EVP_MD *mdh = EVP_get_md5();

    EVP_DigestInit_ex(&ctx, mdh, 0);
    EVP_DigestUpdate(&ctx, text.c_str(), text.size());
    EVP_DigestFinal_ex(&ctx, md, &ptr);

    string result;
    for (int i = 0; i < 16; ++i) {
        char buff[3];
        sprintf(buff, "%02x", md[i]);
        result += buff;
    }

    EVP_PKEY_free(pkey);
    EVP_MD_free(mdh);
    return result;
}