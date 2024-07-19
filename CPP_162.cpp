#include <iostream>
#include <cstring>

extern "C" {
    #include <openssl/md5.h>
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

char* string_to_md5(const char* input) {
    unsigned char result[16];
    MD5_CTX md5ctx;
    MD5_Init(&md5ctx);
    MD5_Update(&md5ctx, input, strlen(input));
    MD5_Final(result, &md5ctx);

    char* output = new char[33];
    for (int i = 0; i < 16; i++) {
        sprintf(output + i*2, "%02x", result[i]);
    }
    return output;
}