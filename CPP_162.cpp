#include <iostream>
#include <string>
#include <openssl/evp.h>
#include <cassert>

std::string string_to_md5(const std::string& text) {
    if (text.empty()) {
        return "None";
    }

    EVP_MD_CTX *md_ctx = EVP_MD_CTX_new();
    EVP_DigestInit(md_ctx, EVP_md5());

    EVP_DigestUpdate(md_ctx, text.c_str(), text.length());

    unsigned char digest[EVP_MAX_MD_SIZE];
    unsigned int digest_len;
    EVP_DigestFinal(md_ctx, digest, &digest_len);

    EVP_MD_CTX_free(md_ctx);

    char mdString[33];
    for (int i = 0; i < 16; i++) {
        sprintf(&mdString[i * 2], "%02x", (unsigned int)digest[i]);
    }

    return std::string(mdString);
}

int main() {
    OpenSSL_add_all_digests();

    assert(string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");

    EVP_cleanup();

    return 0;
}