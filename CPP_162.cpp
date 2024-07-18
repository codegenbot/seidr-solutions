
#include <openssl/evp.h>
#include <cassert>
#include <string>

std::string string_to_md5(const std::string& input) {
    EVP_MD_CTX* ctx = EVP_MD_CTX_new();

    EVP_DigestInit_ex(ctx, EVP_md5(), NULL);
    EVP_DigestUpdate(ctx, input.c_str(), input.length());

    unsigned char md[EVP_MD_size(EVP_md5())];
    unsigned int mdLen;
    EVP_DigestFinal_ex(ctx, md, &mdLen);

    EVP_MD_CTX_free(ctx);

    char mdString[33];
    for (int i = 0; i < EVP_MD_size(EVP_md5()); i++) {
        sprintf(&mdString[i * 2], "%02x", (unsigned int)md[i]);
    }
    
    return std::string(mdString);
}