
#include <iostream>
#include <string>
#include <openssl/evp.h>

std::string string_to_md5(const std::string& text) {
    if (text.empty()) {
        return "";
    }
    EVP_MD_CTX ctx;
    EVP_DigestInit_ex(&ctx, EVP_md5(), nullptr, 0);
    EVP_DigestUpdate_ex(&ctx, text.c_str(), text.size());
    unsigned char md[EVP_MAX_MD_SIZE];
    EVP_DigestFinal_ex(&ctx, md, nullptr);
    std::string result;
    for (int i = 0; i < EVP_MAX_MD_SIZE; i++) {
        result += std::to_string((int)md[i]);
    }
    return result;
}

int main() {
    std::string input = "password";
    std::cout << string_to_md5(input) << std::endl;
    return 0;
}