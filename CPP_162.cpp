#include <openssl/evp.h>

string string_to_md5(string text) {
    if (text.empty()) return "";
    
    unsigned char md5[16];
    EVP_MD_CTX ctx;
    const EVP_MD *md = EVP_md5();
    unsigned char input[1024];

    int len = 0;
    for (auto c : text) {
        input[len++] = (unsigned char)c;
    }
    input[len] = '\0';

    if (!EVP_DigestInit_ex(&ctx, md, NULL)) {
        return "";
    }

    if (!EVP_DigestUpdate(&ctx, input, len)) {
        return "";
    }

    if (!EVP_DigestFinal_ex(&ctx, md5, nullptr)) {
        return "";
    }

    string res = "";
    for (int i = 0; i < 16; i++) {
        char buff[3];
        sprintf(buff, "%02x", md5[i]);
        res += buff;
    }
    
    return res;
}