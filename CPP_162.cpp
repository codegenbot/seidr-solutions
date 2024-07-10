#include <openssl/evp.h>
#include <openssl/crypto.h>
#include <string>
#include <iostream>
#include <cassert>
#include <iomanip>
#include <sstream>

std::string string_to_md5(const std::string& input) {
    OpenSSL_add_all_digests(); // Added initialization for digest algorithms

    EVP_MD_CTX *mdctx = EVP_MD_CTX_new();
    const EVP_MD *md = EVP_md5();
    unsigned char md5_hash[EVP_MD_size(md)];
    unsigned int hash_len;

    if (!EVP_DigestInit_ex(mdctx, md, NULL) ||
        !EVP_DigestUpdate(mdctx, input.c_str(), input.size()) ||
        !EVP_DigestFinal_ex(mdctx, md5_hash, &hash_len)) {
        EVP_MD_CTX_free(mdctx);
        return ""; // Handle error
    }

    EVP_MD_CTX_free(mdctx);

    std::stringstream ss;
    ss << std::hex << std::setfill('0');
    for (unsigned int i = 0; i < hash_len; i++) {
        ss << std::setw(2) << static_cast<int>(md5_hash[i]);
    }

    return ss.str();
}