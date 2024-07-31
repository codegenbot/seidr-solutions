```cpp
#include <iostream>
#include <string>

std::string hex_key_value() {
    std::string num;
    for (char c; std::cin >> c;) {
        if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'F') || (c >= 'a' && c <= 'f')) {
            num += c;
        }
    }
    if (!num.empty()) {
        std::cout << "The result is: " << num << std::endl;
    } else {
        std::cout << "No valid hexadecimal key found." << std::endl;
    }
    return "";
}