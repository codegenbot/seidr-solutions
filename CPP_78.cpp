```cpp
#include <iostream>
#include <string>

int hex_key(const std::string& num) {
    int count = 0;
    for (std::size_t i = 0; i < num.size(); ++i) {
        char c = num[i];
        if ((c >= '2' && c <= '7') || (c == 'B' || c == 'D' || c == 'F' || c == 'b' || c == 'd' || c == 'f')) {
            count++;
        }
    }
    return count;
}

int main() {
    std::string input;
    std::cout << "Enter a hexadecimal number: ";
    std::getline(std::cin, input);
    int result = hex_key(input);
    std::cout << "Number of valid characters: " << result << std::endl;
}