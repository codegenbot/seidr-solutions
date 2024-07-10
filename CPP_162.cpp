#include <iostream>
#include <string>
#include <openssl/md5.h>

std::string myString_to_md5(const char *text) {
    unsigned char result[16];
    MD5_CTX mdctx;
    MD5_Init(&mdctx);
    MD5_Update(&mdctx, (const unsigned char*)text, strlen(text));
    int mdSize = MD5_DIGEST_LENGTH;
    MD5_Final(&mdctx, NULL, &mdSize);
    std::string output;
    for (int i = 0; i < mdSize; i++) {
        char temp[3];
        sprintf(temp, "%02x", ((unsigned char*)(&mdctx.md5_data))[i]);
        output += temp;
    }
    return output;
}

int main() {
    std::cout << "Enter a string: ";
    std::string input;
    std::getline(std::cin, input);
    const char *input_str = input.c_str();
    std::string output = myString_to_md5(input_str);
    std::cout << "MD5: " << output << std::endl;
    return 0;
}