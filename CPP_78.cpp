```cpp
#include <iostream>
#include <string>

int hex_key_value(std::string num) {
    int count = 0;
    for (char c : num) {
        if ((c >= '2' && c <= '7') || (c == 'B' || c == 'D' || c == 'F')) {
            count++;
        }
    }
    return count;
}

int main() {
    std::string input = "";
    std::cout << "Enter a hexadecimal number: ";
    std::getline(std::cin, input);
    int output = hex_key_value(input);
    std::cout << "The result is: " << output << std::endl;
}