#include <string>
#include <openssl/evp.h>

std::string string_to_md5(const std::string &text) {
    if (text.empty()) {
        return "None";
    }

    EVP_MD_CTX *mdctx;
    unsigned char digest[EVP_MAX_MD_SIZE];
    unsigned int digest_len;
    
    mdctx = EVP_MD_CTX_new();
    EVP_DigestInit_ex(mdctx, EVP_md5(), NULL);
    EVP_DigestUpdate(mdctx, text.c_str(), text.length());
    EVP_DigestFinal_ex(mdctx, digest, &digest_len);
    EVP_MD_CTX_free(mdctx);

    char mdString[33];
    for (unsigned int i = 0; i < digest_len; i++) {
        sprintf(&mdString[i * 2], "%02x", digest[i]);
    }
    mdString[32] = '\0'; // Add null terminator
    
    return mdString;
}