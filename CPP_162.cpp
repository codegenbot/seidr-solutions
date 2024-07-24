```
#include <iostream>
#include <sstream>
#include <string>
#include <openssl/md5.h>

std::string string_to_md5(std::string text) {
    if (text.empty()) return "";
    
    unsigned char md5[MD5_DIGEST_LENGTH];
    MD5((unsigned char*)text.c_str(), text.size(), md5);
    
    std::stringstream ss;
    for(int i = 0 ; i < MD5_DIGEST_LENGTH; i++) {
        ss << std::hex << setfill('0') << fixed << setw(2) << (int)md5[i];
    }
    
    return ss.str();
}

int main() {
    std::string text;
    std::cout << "Enter a string: ";
    std::getline(std::cin, text);
    std::cout << "MD5: " << string_to_md5(text) << std::endl;
    return 0;
}