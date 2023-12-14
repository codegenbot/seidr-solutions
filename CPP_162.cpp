
#include <iostream>
#include <string>
#include <openssl/evp.h>
#include <openssl/md5.h>

int main() {
    // Initialize OpenSSL
    EVP_MD_CTX* ctx = EVP_MD_CTX_create();
    if (!ctx) {
        return 1;
    }

    // Set the digest type to MD5
    EVP_DigestInit(ctx, EVP_md5());

    // Update the digest with the input text
    std::string text = "password";
    EVP_DigestUpdate(ctx, text.c_str(), text.size());

    // Finalize the digest and get the result
    unsigned char md[EVP_MAX_MD_SIZE];
    EVP_DigestFinal(ctx, md, NULL);

    // Print the resulting hash
    std::cout << "Hash: ";
    for (int i = 0; i < EVP_MAX_MD_SIZE; i++) {
        std::cout << std::hex << md[i];
    }
    std::cout << std::endl;

    return 0;
}