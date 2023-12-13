```
#include <openssl/evp.h>

int string_to_md5(const char *text) {
    if (text == NULL || strlen(text) == 0) {
        return -1;
    }

    unsigned char md[MD5_DIGEST_LENGTH];
    EVP_DigestInit(EVP_md5(), md);
    EVP_DigestUpdate(EVP_md5(), text, strlen(text));
    EVP_DigestFinal(EVP_md5(), md);

    return 0;
}
```