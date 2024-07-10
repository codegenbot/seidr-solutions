#include <iostream>
#include <string>
#include <openssl/md5.h>

std::string myString_to_md5(const std::string& text) {
    unsigned char result[16];
    MD5_CTX mdctx;
    MD5_Init(&mdctx);
    MD5_Update(&mdctx, (const unsigned char*)text.c_str(), text.length());
    unsigned char mdValue[MD5_DIGEST_LENGTH];
    MD5_Final(&mdctx, mdValue, nullptr);
    std::string output;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        char temp[3];
        sprintf(temp, "%02x", mdValue[i]);
        output += temp;
    }
    return output;
}

int main() {
    std::cout << "Enter a string: ";
    std::string input;
    std::getline(std::cin, input);
    const char *input_str = input.c_str();
    std::string output = myString_to_md5(input);
    std::cout << "MD5: " << output << std::endl;
    return 0;
}