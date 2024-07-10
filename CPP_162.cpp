#include <openssl/evp.h>
#include <string>
#include <iostream>
#include <cassert>

std::string string_to_md5(const std::string& input) {
    unsigned char hash[MD5_DIGEST_LENGTH];
    EVP_MD_CTX context;
    EVP_MD_CTX_init(&context);
    EVP_DigestInit_ex(&context, EVP_md5(), NULL);
    EVP_DigestUpdate(&context, input.c_str(), input.size());
    EVP_DigestFinal_ex(&context, hash, NULL);
    EVP_MD_CTX_cleanup(&context);

    std::string md5_hash;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        md5_hash += char(hash[i]);
    }

    return md5_hash;
}

int main() {
    assert(string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");
    std::cout << "MD5 hash test passed!" << std::endl;

    return 0;
}