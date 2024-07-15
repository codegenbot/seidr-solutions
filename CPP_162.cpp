#include <openssl/evp.h>
#include <cstdio>
#include <cassert>
#include <string>

std::string string_to_md5(const std::string& text);

std::string string_to_md5(const std::string& text) {
    if (text.empty()) {
        return "None";
    }

    unsigned char digest[EVP_MAX_MD_SIZE];
    unsigned int md_len;

    EVP_MD_CTX *mdctx = EVP_MD_CTX_new();
    EVP_DigestInit_ex(mdctx, EVP_md5(), NULL);
    EVP_DigestUpdate(mdctx, text.c_str(), text.length());
    EVP_DigestFinal_ex(mdctx, digest, &md_len);
    EVP_MD_CTX_free(mdctx);

    char md5_hash[2 * EVP_MAX_MD_SIZE + 1];
    for (unsigned int i = 0; i < md_len; i++) {
        sprintf(&md5_hash[i * 2], "%02x", (unsigned int)digest[i]);
    }

    return std::string(md5_hash);
}

int main() {
    assert(string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");
    return 0;
}