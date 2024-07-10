```cpp
#include <iostream>
#include <string>

std::string myString_to_md5(const char *text) {
    unsigned char result[16];
    EVP_MD5_CTX mdctx;
    EVP_MD5_Init(&mdctx);
    EVP_MD5_Update(&mdctx, (const unsigned char*)text, strlen(text));
    unsigned char mdValue[EVP_MAX_MD_SIZE];
    int mdSize = sizeof(mdValue);
    EVP_MD5_Final(&mdctx, mdValue, &mdSize);
    std::string output;
    for (int i = 0; i < 16; i++) {
        char temp[3];
        sprintf(temp, "%02x", mdValue[i]);
        output += temp;
    }
    return output;
}

int main() {
    std::cout << "Enter a string: ";
    std::string input;
    std::cin >> input;
    const char *input_str = input.c_str();
    std::string output = myString_to_md5(input_str);
    std::cout << "MD5: " << output << std::endl;
    return 0;
}