```
#include <openssl/evp.h>

string string_to_md5(string text) {
    if (text.empty()) {
        return "";
    }
    EVP_MD_CTX ctx;
    EVP_DigestInit(&ctx, EVP_md5());
    EVP_DigestUpdate(&ctx, text.c_str(), text.size());
    unsigned char md[EVP_MAX_MD_SIZE];
    EVP_DigestFinal(&ctx, md);
    string result = "";
    for (int i = 0; i < EVP_MAX_MD_SIZE; i++) {
        result += to_string(md[i]);
    }
    return result;
}
```