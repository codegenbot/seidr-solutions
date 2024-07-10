#include <openssl/evp.h>
#include <openssl/crypto.h>
#include <string>
#include <iostream>
#include <cassert>
#include <iomanip>
#include <sstream>

std::string string_to_md5(const std::string& input) {
    EVP_MD_CTX *mdctx = EVP_MD_CTX_create();
    const EVP_MD *md = EVP_md5();
    unsigned char md5_hash[MD5_DIGEST_LENGTH];
    unsigned int hash_len;

    OpenSSL_add_all_algorithms();

    if (!EVP_DigestInit_ex(mdctx, md, NULL) ||
        !EVP_DigestUpdate(mdctx, input.c_str(), input.size()) ||
        !EVP_DigestFinal_ex(mdctx, md5_hash, &hash_len)) {
        EVP_MD_CTX_free(mdctx);
        return ""; // Handle error
    }

    EVP_MD_CTX_free(mdctx);

    std::string md5_hash_str;
    for (unsigned int i = 0; i < hash_len; i++) {
        md5_hash_str += char(md5_hash[i]);
    }

    std::stringstream ss;
    ss << std::hex << std::setfill('0');
    for (unsigned int i = 0; i < hash_len; i++) {
        ss << std::setw(2) << static_cast<int>(md5_hash[i]);
    }

    return ss.str();
}