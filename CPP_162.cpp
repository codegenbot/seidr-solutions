#include <openssl/evp.h>
#include <cassert>
#include <string>

std::string string_to_md5(const std::string& input) {
    EVP_MD_CTX* ctx = EVP_MD_CTX_new();

    OpenSSL_add_all_digests();

    EVP_DigestInit_ex(ctx, EVP_md5(), NULL);
    EVP_DigestUpdate(ctx, input.c_str(), input.length());

    const int MD5_DIGEST_LENGTH = EVP_MD_size(EVP_md5()); // Define MD5_DIGEST_LENGTH using EVP_MD_size
    unsigned char md[MD5_DIGEST_LENGTH];
    unsigned int mdLen;
    EVP_DigestFinal_ex(ctx, md, &mdLen);

    EVP_MD_CTX_free(ctx);

    char mdString[33];
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        sprintf(&mdString[i * 2], "%02x", md[i]);
    }

    return std::string(mdString);
}