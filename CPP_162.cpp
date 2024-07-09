#include <openssl/evp.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>

EVP_MD_CTX* EVP_MD_CTX_new(void) {
    return EVP_MD_CTX_new();
}

std::string string_to_md5(std::string text) {
    if (text.empty()) return "";
    
    unsigned char md5[16];
    EVP_MD_CTX* mdctx = EVP_MD_CTX_new();
    const char* p = text.c_str();
    while (*p) {
        EVP_DigestUpdate(mdctx, p++, std::string(p, p).length());
    }
    EVP_DigestFinal(mdctx, md5, nullptr);
    
    EVP_MD_CTX_free(mdctx);
    
    std::string result(32, '0');
    for (int i = 0; i < 16; ++i) {
        char buf[3];
        sprintf(buf, "%02x", md5[i]);
        result.replace(i*2, 2, buf);
    }
    
    return result;
}

int main() {
    std::string text;
    std::cout << "Enter a string: ";
    std::getline(std::cin, text);
    std::cout << "MD5: " << string_to_md5(text) << std::endl;
    return 0;