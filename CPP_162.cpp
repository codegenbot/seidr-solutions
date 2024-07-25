#include <openssl/ssl.h>
#include <openssl/evp.h>

std::string string_to_md5(std::string text) {
    EVP_MD_CTX mdctx;
    unsigned char md[16];
    const char* str = text.c_str();
    size_t len = text.length();

    if (len == 0)
        return "";

    EVP_MD_CTX_init(&mdctx);
    EVP_DigestInit_ex(&mdctx, EVP_md5(), NULL);
    EVP_DigestUpdate(&mdctx, str, len);
    unsigned char result[16];
    int len_output = EVP_DigestFinal_ex(&mdctx, result, NULL);

    std::string md5_result;
    for (int i = 0; i < len_output; i++) {
        char buffer[3];
        sprintf(buffer, "%02x", result[i]);
        md5_result += buffer;
    }
    return md5_result;
}

int main() {
    assert(string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");
    return 0;
}