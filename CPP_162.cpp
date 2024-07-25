#include <openssl/evp.h>
#include <string>
#include <cassert>

std::string string_to_md5(std::string text) {
    EVP_MD_CTX* md_ctx;
    unsigned char md[16];
    const char* str = text.c_str();
    size_t len = text.length();

    if (len == 0)
        return "";

    md_ctx = EVP_MD_CTX_new(NULL);
    EVP_DigestInit_ex(md_ctx, EVP_md5(), NULL);
    EVP_DigestUpdate(md_ctx, str, len);
    EVP_DigestFinal_ex(md_ctx, md, &len);

    std::string result;
    for (int i = 0; i < 16; i++) {
        char buffer[3];
        sprintf(buffer, "%02x", md[i]);
        result += buffer;
    }
    EVP_MD_CTX_free(md_ctx);
    return result;
}

int main() {
    assert(string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");
    return 0;
}