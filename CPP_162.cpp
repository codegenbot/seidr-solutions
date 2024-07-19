#include <iostream>
#include <cstring>
#include <openssl/err.h>
#include <openssl/md5.h>
#include <openssl/evp.h>

char* string_to_md5(const char* input) {
    unsigned char result[16];
    EVP_MD_CTX md5ctx;
    EVP_MD *md = EVP_sha1();
    EVP_MD_CTX_init(&md5ctx);
    EVP_DigestInit_ex(&md5ctx, md, nullptr);
    EVP_DigestUpdate(&md5ctx, input, strlen(input));
    unsigned char* output = new unsigned char[16];
    EVP_Digest(&md5ctx, 16, output, nullptr, 0);
    EVP_MD_CTX_destroy(&md5ctx);

    char* hash = new char[33];
    for (int i = 0; i < 16; i++) {
        sprintf(hash + i*2, "%02x", output[i]);
    }
    delete[] output;
    return hash;
}

int main() {
    char input[1024]; 
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = 0; // remove newline character
    char* hash = string_to_md5(input);
    printf("MD5 hash: %s\n", hash);
    delete[] hash; 
    return 0;
}