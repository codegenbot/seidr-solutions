#include <openssl/evp.h>

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char md[16];
    EVP_MD_CTX ctx;
    EVP_PKEY key;
    const EVP_MD *mdalg = EVP_get_digestbyname("MD5");
    
    EVP_DigestInit_ex(&ctx, mdalg, NULL);
    EVP_DigestUpdate(&ctx, text.c_str(), text.size());
    EVP_DigestFinal_ex(&ctx, md, NULL);

    string result;
    for (int i = 0; i < 16; ++i) {
        char buff[3];
        sprintf(buff, "%02x", md[i]);
        result += buff;
    }
    
    return result;
}