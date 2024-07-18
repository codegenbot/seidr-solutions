#include <iostream>
#include <string>
#include <openssl/md5.h>
#include <openssl/evp.h>
#include <openssl/ssl.h>

std::string string_to_md5(const std::string& text) {
    if (text.empty()) {
        return "None";
    }

    SSL_library_init();
    
    OpenSSL_add_all_digests();
    
    EVP_MD_CTX* mdctx = EVP_MD_CTX_new();
    const EVP_MD* md = EVP_md5();
    
    EVP_DigestInit_ex(mdctx, md, NULL);
    EVP_DigestUpdate(mdctx, text.c_str(), text.length());
    
    unsigned char md_value[EVP_MAX_MD_SIZE];
    unsigned int md_len;
    EVP_DigestFinal_ex(mdctx, md_value, &md_len);
    
    EVP_MD_CTX_free(mdctx);
    
    char mdString[33];
    for (int i = 0; i < md_len; i++) {
        sprintf(&mdString[i * 2], "%02x", md_value[i]);
    }

    return std::string(mdString);
}