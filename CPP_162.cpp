#include <openssl/evp.h>

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char md[16];
    EVP_MD_CTX md_ctx;
    EVP_MD *md_algorithm = EVP_md5();
    const void* data = text.c_str();
    size_t len = text.size();

    EVP_DigestInit_ex(&md_ctx, md_algorithm, 0);
    EVP_DigestUpdate(&md_ctx, data, len);
    EVP_DigestFinal_ex(&md_ctx, md, &len);

    string result;
    for (int i = 0; i < 16; ++i) {
        char buffer[3];
        sprintf(buffer, "%02x", md[i]);
        result += buffer;
    }

    return result;
}