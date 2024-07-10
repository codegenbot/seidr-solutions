```cpp
#include <iostream>
#include <string>
#include <openssl/md5.h>

std::string myString_to_md5(const char *text) {
    unsigned char result[16];
    MD5_CTX mdctx;
    MD5_Init(&mdctx);
    MD5_Update(&mdctx, (const unsigned char*)text, strlen(text));
    MD5_Final(result, &mdctx); 
    std::string output;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        char temp[3];
        sprintf(temp, "%02x", result[i]);
        output += std::string(1, temp[0]) + std::string(1, temp[1]); 
    }
    return output;

int main() {
    std::string text;
    std::cout << "Enter a string: ";
    std::getline(std::cin, text);  
    std::cout << myString_to_md5(text.c_str()) << std::endl;  
    return 0;
}