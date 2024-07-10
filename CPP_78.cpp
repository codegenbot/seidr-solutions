#include <iostream>
#include <string>

int hex_key(const std::string& num) {
    int count = 0;
    for (char c : num) {
        if ((c >= '2' && c <= '7') || (c == 'B' || c == 'D' || c == 'F' || c == 'b' || c == 'd' || c == 'f')) {
            result++; // Count the valid characters
        }
    }
    return count;
}

int main() {
    std::string input;
    std::cout << "Enter a hexadecimal number: ";
    std::getline(std::cin, input);
    int result = 0; 

    for (char c : input) {
        if ((c >= '2' && c <= '7') || (c == 'B' || c == 'D' || c == 'F' || c == 'b' || c == 'd' || c == 'f')) {
            result++; // Count the valid characters
        }
    }
    std::cout << "Number of valid characters: " << result << std::endl;
}