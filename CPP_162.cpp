```
#include <string>
#include <cstdio>
#include <cassert>

std::string stringToMd5(const std::string& text) {
    if (text.empty()) {
        return "";
    }
    EVP_MD_CTX *ctx = EVP_MD_CTX_new();
    EVP_DigestInit(ctx, EVP_md5());
    EVP_DigestUpdate(ctx, text.c_str(), text.size());
    unsigned char md[EVP_MAX_MD_SIZE];
    EVP_DigestFinal(ctx, md, NULL);
    std::string result = "";
    for (int i = 0; i < EVP_MAX_MD_SIZE; i++) {
        result += to_string(md[i]);
    }
    return result;
}
```