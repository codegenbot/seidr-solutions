#include <iostream>
#include <cstring>

extern "C" {
    #include <openssl/evp.h>
}

char* string_to_md5(const char* input) {
    unsigned char result[16];
    EVP_MD_CTX md5ctx;
    EVP_MD_CTX_init(&md5ctx);
    EVP_DigestInit_ex(&md5ctx, EVP_md5(), NULL);
    EVP_DigestUpdate(&md5ctx, input, strlen(input));
    EVP_DigestFinal_ex(&md5ctx, result, NULL);

    char* output = new char[33];
    for (int i = 0; i < 16; i++) {
        sprintf(output + i*2, "%02x", result[i]);
    }
    return output;
}

int main() {
    char input[1024]; 
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = 0; // remove newline character
    printf("MD5 hash: %s\n", string_to_md5(input));
    delete[] string_to_md5(input); // free the dynamically allocated memory
    return 0;
}