#include <iostream>
#include <string>
#include <openssl/md5.h>
#include <openssl/evp.h>

std::string string_to_md5(const std::string& text) {
    if(text.empty()) {
        return "None";
    }

    EVP_MD_CTX* ctx = EVP_MD_CTX_new();
    EVP_DigestInit_ex(ctx, EVP_md5(), NULL);
    EVP_DigestUpdate(ctx, text.c_str(), text.length());

    unsigned char digest[MD5_DIGEST_LENGTH];
    unsigned int digest_length;
    EVP_DigestFinal_ex(ctx, digest, &digest_length);
    EVP_MD_CTX_free(ctx);

    char md5hash[33];
    for(int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        sprintf(&md5hash[i*2], "%02x", (unsigned int)digest[i]);
    }

    return std::string(md5hash);
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::cin >> input;
    std::cout << "MD5 Hash: " << string_to_md5(input) << std::endl;
    return 0;
}