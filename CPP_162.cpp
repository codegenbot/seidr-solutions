#include <openssl/evp.h>

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char md[16];
    const EVP_MD* evp_md = EVP_md5();
    unsigned char* data = reinterpret_cast<unsigned char*>(text.c_str());
    int len = text.size();
    unsigned int dlen = len;
    EVP_MD_CTX ctx;
    EVP_MD_CTX_init(&ctx);
    EVP_DigestInit_ex(&ctx, evp_md, NULL);
    EVP_DigestUpdate(&ctx, data, dlen);
    EVP_DigestFinal_ex(&ctx, md, &dlen);
    EVP_MD_CTX_cleanup(&ctx);

    string result = "";
    for (int i = 0; i < 16; ++i) {
        char buffer[3];
        sprintf(buffer, "%02x", md[i]);
        result += buffer;
    }
    return result;
}