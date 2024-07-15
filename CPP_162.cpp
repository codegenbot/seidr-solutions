#include <openssl/evp.h>
#include <string>
#include <cassert>

std::string string_to_md5(const std::string& text) {
    if (text.empty()) {
        return "None";
    }

    unsigned char digest[EVP_MAX_MD_SIZE];
    unsigned int digest_len = 0;
    EVP_Digest((const unsigned char*)text.c_str(), text.length(), digest, &digest_len, EVP_md5(), NULL);

    char md5_hash[2 * EVP_MAX_MD_SIZE + 1];
    for (unsigned int i = 0; i < digest_len; i++) {
        sprintf(&md5_hash[i * 2], "%02x", digest[i]);
    }

    return std::string(md5_hash);
}