#include <iostream>
#include <string>
#include <cassert>
#include <openssl/evp.h>
#include <cstdint>
#include <sstream>

std::string string_to_md5(const std::string& text) {
    if (text.empty()) {
        return "None";
    }
    
    EVP_MD_CTX* mdctx = EVP_MD_CTX_new();
    if (mdctx == NULL) {
        return "Error creating MD_CTX";
    }
    
    if (EVP_DigestInit_ex(mdctx, EVP_md5(), NULL) != 1) {
        EVP_MD_CTX_free(mdctx);
        return "Error initializing MD5 digest";
    }
    
    if (EVP_DigestUpdate(mdctx, text.c_str(), text.size()) != 1) {
        EVP_MD_CTX_free(mdctx);
        return "Error updating MD5 digest";
    }

    uint8_t md_value[EVP_MAX_MD_SIZE];
    unsigned int md_len;

    if (EVP_DigestFinal_ex(mdctx, md_value, &md_len) != 1) {
        EVP_MD_CTX_free(mdctx);
        return "Error finalizing MD5 digest";
    }
    EVP_MD_CTX_free(mdctx);

    std::stringstream ss;
    for (unsigned int i = 0; i < md_len; i++) {
        ss << std::hex << std::setw(2) << std::setfill('0') << (unsigned int)md_value[i];
    }

    return ss.str();
}