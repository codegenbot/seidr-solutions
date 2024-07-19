#include <iostream>
#include <string>
#include <cassert>
#include <openssl/evp.h>
#include <sstream>

std::string string_to_md5(const std::string& text) {
    if (text.empty()) {
        return "None";
    }

    EVP_MD_CTX* mdctx = EVP_MD_CTX_new();
    if (!mdctx) {
        return "Error creating MD context";
    }

    if (!EVP_DigestInit_ex(mdctx, EVP_md5(), NULL)) {
        return "Error initializing MD context";
    }

    if (!EVP_DigestUpdate(mdctx, text.c_str(), text.size())) {
        return "Error updating MD context";
    }

    unsigned char md_value[EVP_MAX_MD_SIZE];
    unsigned int md_len;

    if (!EVP_DigestFinal_ex(mdctx, md_value, &md_len)) {
        return "Error finalizing MD context";
    }
    EVP_MD_CTX_free(mdctx);

    std::stringstream ss;
    for (unsigned int i = 0; i < md_len; i++) {
        ss << std::hex << static_cast<unsigned int>(md_value[i]);
    }

    return ss.str();
}