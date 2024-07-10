#include <iostream>
#include <string>

int hex_key(const std::string& num) {
    int result = 0; 
    for (char c : num) {
        if ((c >= '2' && c <= '7') || (c == 'B' || c == 'D' || c == 'F' || c == 'b' || c == 'd' || c == 'f')) {
            result++; 
        }
    }
    return result; 
}

int main() {
    std::string input;
    std::cout << "Enter a hexadecimal number: ";
    std::getline(std::cin, input);
    int valid_chars = hex_key(input); 

    std::cout << "Number of valid characters: " << valid_chars << std::endl;
}