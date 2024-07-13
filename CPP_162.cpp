#include <openssl/ssl.h>
#include <openssl/x509v3.h>

string string_to_md5(string text) {
    if(text.empty()) return "";

    unsigned char md[16];
    const EVP_MD* e = EVP_md5();
    EVP_MD_CTX ctx;
    unsigned char result[EVP_MAX_BLOCK_LENGTH];

    EVP_DigestInit_ex(&ctx, e, NULL);
    EVP_DigestUpdate(&ctx, text.c_str(), text.size());
    EVP_DigestFinal_ex(&ctx, md, &result);

    string output = "";
    for (int i = 0; i < 16; i++) {
        char buff[3];
        sprintf(buff, "%02x", md[i]);
        output += buff;
    }

    return output;
}