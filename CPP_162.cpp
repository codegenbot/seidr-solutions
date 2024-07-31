#include <iostream>
#include <string>
#include <openssl/md5>

std::string string_to_md5(const std::string& text) {
    if (text.empty()) {
        return "None";
    }

    unsigned char result[MD5_DIGEST_LENGTH];
    EVP_MD_CTX* ctx = EVP_MD_CTX_new();

    EVP_DigestInit_ex(ctx, EVP_md5(), NULL);
    EVP_DigestUpdate(ctx, text.c_str(), text.length());
    EVP_DigestFinal_ex(ctx, result, NULL);

    EVP_MD_CTX_free(ctx);

    char md5_string[MD5_DIGEST_LENGTH * 2 + 1];
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        sprintf(&md5_string[i * 2], "%02x", (unsigned int)result[i]);
    }
    md5_string[MD5_DIGEST_LENGTH * 2] = '\0';

    return std::string(md5_string);
}

int main() {
    std::string input_text;
    std::cout << "Enter text to calculate MD5 checksum: ";
    std::cin >> input_text;

    std::cout << "MD5 checksum: " << string_to_md5(input_text) << std::endl;

    return 0;
}