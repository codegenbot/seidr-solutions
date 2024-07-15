#include <openssl/evp.h>
#include <string>
#include <cassert>

std::string string_to_md5(const std::string& text) {
    if (text.empty()) {
        return "None";
    }

    unsigned char digest[EVP_MAX_MD_SIZE];
    unsigned int digest_len = 0;
    OpenSSL_add_all_algorithms();
    EVP_MD_CTX* mdctx = EVP_MD_CTX_new();

    EVP_DigestInit_ex(mdctx, EVP_md5(), NULL);
    EVP_DigestUpdate(mdctx, (const unsigned char *)text.c_str(), text.length());
    EVP_DigestFinal_ex(mdctx, digest, &digest_len);
    EVP_MD_CTX_free(mdctx);

    char md5_hash[2 * EVP_MAX_MD_SIZE + 1];
    for (unsigned int i = 0; i < digest_len; i++) {
        sprintf(&md5_hash[i * 2], "%02x", digest[i]);
    }

    return std::string(md5_hash);
}