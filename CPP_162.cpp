#include <openssl/evp.h>

string string_to_md5(string text) {
    if (text.empty()) return "";
    
    unsigned char md[16];
    EVP_MD_CTX ctx;
    EVP_MD *mdalg = EVP_md5();
    const void* data = text.c_str();
    size_t len = text.size();

    EVP_DigestInit_ex(&ctx, mdalg, 0);
    EVP_DigestUpdate(&ctx, data, len);
    EVP_DigestFinal_ex(&ctx, md, &len);

    string result;
    for (int i = 0; i < 16; ++i) {
        char buff[3];
        sprintf(buff, "%02x", md[i]);
        result += buff;
    }
    
    return result;
}