#include <openssl/evp.h>

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char md[16];
    EVP_MD_CTX md_ctx;
    EVP_PKEY *pkey = EVP_get_default_ec_key();
    EVP_MD *md_obj = EVP_sha1();

    EVP_DigestInit_ex(&md_ctx, md_obj, NULL);
    EVP_DigestUpdate(&md_ctx, text.c_str(), text.size());
    EVP_DigestFinal_ex(&md_ctx, md, NULL);

    string result;
    for (int i = 0; i < 16; i++) {
        char buffer[3];
        sprintf(buffer, "%02x", md[i]);
        result += buffer;
    }

    return result;
}