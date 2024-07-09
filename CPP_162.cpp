```cpp
#include <iostream>
#include <string>

std::string string_to_md5(std::string text) {
    if (text.empty()) return "";

    std::string result(32, '0');
    
    // Your conversion code here...
    for (int i = 0; i < 32; ++i) {
        char buf[3];
        sprintf(buf, "%02x", (unsigned int)(text[i] & 0xFF));
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
}