#include <string>
#include <openssl/evp.h>
#include <cassert>

std::string string_to_md5(const std::string& input) {
    EVP_MD_CTX *mdctx;
    const EVP_MD *md;
    unsigned char md_value[EVP_MAX_MD_SIZE];
    unsigned int md_len;

    OpenSSL_add_all_digests();
    OpenSSL_init_crypto(0, nullptr);

    md = EVP_get_digestbyname("md5");
    assert(md != nullptr);

    mdctx = EVP_MD_CTX_new();
    assert(EVP_DigestInit_ex(mdctx, md, nullptr) == 1);
    assert(EVP_DigestUpdate(mdctx, input.c_str(), input.size()) == 1);
    assert(EVP_DigestFinal_ex(mdctx, md_value, &md_len) == 1);
    
    EVP_MD_CTX_free(mdctx);

    std::string md5_hash((char*)md_value, md_len);
    return md5_hash;
}