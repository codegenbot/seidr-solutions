#include <string>
#include <iostream>

int hex_key(std::string num) {
    int count = 0;
    for (char c : num) {
        if ((c >= '2' && c <= '7') || (c >= 'B' && c <= 'F')) {
            count++;
        }
    }
    return count;
}

int main() {
    std::string input;
    // Get user input
    std::cout << "Enter a hexadecimal number: ";
    std::cin >> input;

    int output = hex_key(input);
    return 0;
}