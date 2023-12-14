```
#include <iostream>
#include <string>
#include <openssl/evp.h>

std::string string_to_md5(const std::string& text) {
    if (text.empty()) {
        return "";
    }
    EVP_MD_CTX ctx;
    EVP_DigestInit(&ctx, EVP_md5());
    EVP_DigestUpdate(&ctx, text.c_str(), text.size());
    unsigned char md[EVP_MAX_MD_SIZE];
    EVP_DigestFinal(&ctx, md);
    std::string result = "";
    for (int i = 0; i < EVP_MAX_MD_SIZE; i++) {
        result += std::to_string((int)md[i]);
    }
    return result;
}

int main() {
    assert(string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");
    EVP_MD_CTX ctx;
    EVP_DigestInit(&ctx, EVP_md5());
    EVP_DigestUpdate(&ctx, "password", 8);
    unsigned char md[EVP_MAX_MD_SIZE];
    EVP_DigestFinal(&ctx, md);
    std::string result = "";
    for (int i = 0; i < EVP_MAX_MD_SIZE; i++) {
        result += std::to_string((int)md[i]);
    }
    assert(result == "5f4dcc3b5aa765d61d8327deb882cf99");
    return 0;
}
```