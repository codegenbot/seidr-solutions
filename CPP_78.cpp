```cpp
#include <iostream>
#include <string>

int hex_key_value(std::string num) {
    std::string result = "";
    for (char c : num) {
        if ((c >= '2' && c <= '7') || (c == 'B' || c == 'D' || c == 'F')) {
            result += c;
        }
    }
    return result;
}

int main() {
    std::string input = "";
    std::cout << "Enter a hexadecimal number: ";
    std::getline(std::cin, input);
    int output = hex_key_value(input).length(); 
    std::cout << "The result is: " << output << std::endl;
}