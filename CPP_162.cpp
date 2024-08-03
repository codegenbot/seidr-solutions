#include <openssl/crypto.h>
#include <string>
#include <openssl/evp.h>

std::string string_to_md5(const std::string& text);

std::string string_to_md5(const std::string& text) {
    if (text.empty()) {
        return "None";
    }

    OPENSSL_init_crypto(OPENSSL_INIT_ADD_ALL_DIGESTS, nullptr);

    EVP_MD_CTX* mdctx = EVP_MD_CTX_new();
    EVP_DigestInit_ex(mdctx, EVP_md5(), nullptr);

    EVP_DigestUpdate(mdctx, text.c_str(), text.length());

    unsigned char digest[EVP_MAX_MD_SIZE];
    unsigned int digest_len;
    
    EVP_DigestFinal_ex(mdctx, digest, &digest_len);
    EVP_MD_CTX_free(mdctx);

    char mdString[33];
    for(int i = 0; i < digest_len; i++) {
        sprintf(&mdString[i*2], "%02x", digest[i]);
    }

    EVP_cleanup();

    return std::string(mdString);
}  