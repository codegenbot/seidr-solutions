#include <openssl/evp.h>
#include <openssl/md5.h>
#include <string>
#include <iostream>

std::string string_to_md5(const std::string& input) {
    EVP_MD_CTX* mdctx;
    const EVP_MD* md = EVP_md5();
    unsigned char md_value[EVP_MAX_MD_SIZE];
    unsigned int md_len;

    mdctx = EVP_MD_CTX_new();
    EVP_DigestInit_ex(mdctx, md, NULL);
    EVP_DigestUpdate(mdctx, input.c_str(), input.length());
    EVP_DigestFinal_ex(mdctx, md_value, &md_len);
    EVP_MD_CTX_free(mdctx);

    char mdString[2 * MD5_DIGEST_LENGTH + 1];
    for (int i = 0; i < md_len; i++) {
        sprintf(&mdString[i * 2], "%02x", (unsigned int)md_value[i]);
    }

    return std::string(mdString);
}