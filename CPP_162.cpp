#include <openssl/evp.h>
#include <openssl/crypto.h>
#include <string>
#include <iostream>
#include <cassert>

std::string string_to_md5(const std::string& input) {
    EVP_MD_CTX *mdctx = NULL;
    const EVP_MD *md = NULL;
    unsigned char hash[EVP_MAX_MD_SIZE];
    unsigned int hash_len;

    OpenSSL_add_all_algorithms(); // Initialize OpenSSL library

    if (!(md = EVP_md5())) {
        return ""; // Handle error
    }

    if (!(mdctx = EVP_MD_CTX_new())) {
        return ""; // Handle error
    }

    if (!EVP_DigestInit_ex(mdctx, md, NULL)) {
        EVP_MD_CTX_free(mdctx);
        return ""; // Handle error
    }

    if (!EVP_DigestUpdate(mdctx, input.c_str(), input.size())) {
        EVP_MD_CTX_free(mdctx);
        return ""; // Handle error
    }

    if (!EVP_DigestFinal_ex(mdctx, hash, &hash_len)) {
        EVP_MD_CTX_free(mdctx);
        return ""; // Handle error
    }

    EVP_MD_CTX_free(mdctx);

    std::string md5_hash;
    for (unsigned int i = 0; i < hash_len; i++) {
        md5_hash += char(hash[i]);
    }

    return md5_hash;
}