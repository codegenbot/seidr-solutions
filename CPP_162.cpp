#include <string>

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
    unsigned char md_value[16];
    int len_output = EVP_DigestFinal_ex(&mdctx, md_value, NULL);

    std::string result;
    for (int i = 0; i < len_output; i++) {
        char buffer[3];
        sprintf(buffer, "%02x", md_value[i]);
        result += buffer;
    }
    return result;