```
#include <string>
#include <openssl/evp.h>
#include <sstream>

std::string string_to_md5(const std::string& text) {
    EVP_MD_CTX* ctx = EVP_MD_CTX_new();
    if (!ctx) {
        return "";
    }
    EVP_DigestInit(ctx, EVP_md5());
    EVP_DigestUpdate(ctx, text.c_str(), text.size());
    unsigned char md[EVP_MAX_MD_SIZE];
    EVP_DigestFinal(ctx, md, NULL);
    std::stringstream oss;
    for (int i = 0; i < EVP_MAX_MD_SIZE; i++) {
        oss << std::setw(2) << std::setfill('0') << static_cast<unsigned int>(md[i]);
    }
    return oss.str();
}
```