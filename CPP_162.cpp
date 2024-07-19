#include <iostream>
#include <string>
#include <openssl/evp.h>

std::string string_to_md5(const std::string& text) {
    if (text.empty()) {
        return "None";
    }

    EVP_MD_CTX* mdctx = EVP_MD_CTX_new();
    EVP_DigestInit_ex(mdctx, EVP_md5(), NULL);
    EVP_DigestUpdate(mdctx, text.c_str(), text.size());

    unsigned char md_value[EVP_MAX_MD_SIZE];
    unsigned int md_len;

    EVP_DigestFinal_ex(mdctx, md_value, &md_len);
    EVP_MD_CTX_free(mdctx);

    char mdString[33];
    for (unsigned int i = 0; i < md_len; i++) {
        snprintf(&mdString[i*2], 3, "%02x", (unsigned int)md_value[i]);
    }

    return std::string(mdString);
}

int main() {
    std::string input_text;
    
    std::cout << "Enter a text to calculate its MD5 hash: ";
    std::cin >> input_text;

    std::cout << "MD5 Hash: " << string_to_md5(input_text) << std::endl;

    return 0;
}