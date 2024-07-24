```
#include <iostream>
#include <sstream>
#include <iomanip>
#include <algorithm>
#include <string>

std::string string_to_md5(const std::string& str) {
    EVP_MD_CTX *ctx = EVP_MD_CTX_new();
    EVP_DigestInit_ex(ctx, EVP_md5(), NULL);
    EVP_DigestUpdate(ctx, str.c_str(), str.size());
    unsigned char buffer[16];
    EVP_DigestFinal_ex(ctx, buffer, NULL);
    std::stringstream ss;
    for (int i = 0; i < 16; i++) {
        ss << std::setfill('0') << std::setw(2) << std::hex << (int)buffer[i];
    }
    return ss.str();
}

int main()
{
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::cout << "MD5 hash: " << string_to_md5(input) << std::endl;
    return 0;
}