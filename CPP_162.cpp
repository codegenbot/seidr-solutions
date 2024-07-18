#include <iostream>
#include <openssl/evp.h>

std::string string_to_md5(const std::string& input) {
    EVP_MD_CTX *ctx = EVP_MD_CTX_new();
    EVP_DigestInit_ex(ctx, EVP_md5(), nullptr);
    EVP_DigestUpdate(ctx, input.c_str(), input.size());
    
    unsigned char md[MD5_DIGEST_LENGTH];
    unsigned int md_len;
    EVP_DigestFinal_ex(ctx, md, &md_len);

    EVP_MD_CTX_free(ctx);

    char mdString[MD5_DIGEST_LENGTH * 2 + 1];
    for(int i = 0; i < MD5_DIGEST_LENGTH; i++)
        sprintf(&mdString[i*2], "%02x", (unsigned int)md[i]);

    return std::string(mdString);
}