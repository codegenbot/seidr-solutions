```
#include <iostream>
#include <openssl/evp.h>
#include <string.h>

const EVP_MD *md = EVP_get_digestbyname("md5");

int main() {
    const char *text = "password";
    unsigned char md5[EVP_MAX_MD_SIZE];
    int mdlen;
    EVP_MD_CTX ctx;
    
    EVP_DigestInit(&ctx, md);
    EVP_DigestUpdate(&ctx, text, strlen(text));
    EVP_DigestFinal(&ctx, md5, &mdlen);
    
    std::cout << "Hash: " << std::hex << md5[0] << std::endl;
    return 0;
}
```