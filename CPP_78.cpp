```cpp
#include <iostream>
#include <string>

std::string hex_key_value() {
    std::string num;
    for (char c; std::cin >> c;) {
        if ((c >= '2' && c <= '7') || (c == 'B' || c == 'D' || c == 'F')) {
            num += c;
        }
    }
    return num;
}

int main() {
    std::string output = hex_key_value();
    std::cout << "The result is: " << output << std::endl;
}