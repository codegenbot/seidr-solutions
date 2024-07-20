#include <string>
#include <openssl/evp.h>
#include <cassert>

std::string string_to_md5(const std::string& input) {
    EVP_MD_CTX *mdctx;
    const EVP_MD *md;
    unsigned char md_value[EVP_MAX_MD_SIZE];
    unsigned int md_len;

    md = EVP_get_digestbyname("md5");
    assert(md != nullptr);

    mdctx = EVP_MD_CTX_new();
    assert(mdctx != nullptr);

    EVP_DigestInit_ex(mdctx, md, nullptr);
    EVP_DigestUpdate(mdctx, input.c_str(), input.length());
    EVP_DigestFinal_ex(mdctx, md_value, &md_len);
    EVP_MD_CTX_free(mdctx);

    char hex_output[2 * EVP_MAX_MD_SIZE + 1];
    for (unsigned int i = 0; i < md_len; i++) {
        sprintf(&hex_output[i * 2], "%02x", md_value[i]);
    }
    hex_output[2 * md_len] = '\0';

    return std::string(hex_output);
}