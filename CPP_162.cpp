```cpp
#include <iostream>
#include <string>

std::string string_to_md5(std::string text) {
    if (text.empty()) return "";

    std::string result;
    for(int i = 0; i < 32; ++i) {
        char buf[3];
        sprintf(buf, "%02x", (text[i/2] >> (i%2)*4) & 0xf);
        result += buf;
    }
    
    return result;
}

int main() {
    std::string text;
    std::cout << "Enter a string: ";
    std::getline(std::cin, text);
    std::cout << "MD5: " << string_to_md5(text) << std::endl;
    return 0;
}