#include <openssl/evp.h>
#include <string>
#include <iostream>
#include <cassert>

std::string string_to_md5(const std::string& input) {
    EVP_MD_CTX *mdctx;
    const EVP_MD *md;
    unsigned char hash[EVP_MAX_MD_SIZE];
    unsigned int hash_len;

    md = EVP_md5();
    mdctx = EVP_MD_CTX_new();
    EVP_DigestInit_ex(mdctx, md, NULL);
    EVP_DigestUpdate(mdctx, input.c_str(), input.size());
    EVP_DigestFinal_ex(mdctx, hash, &hash_len);
    EVP_MD_CTX_free(mdctx);

    std::string md5_hash;
    for (unsigned int i = 0; i < hash_len; i++) {
        md5_hash += char(hash[i]);
    }

    return md5_hash;
}

int main() {
    assert(string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");
    std::cout << "MD5 hash test passed!" << std::endl;

    return 0;
}