```
#include <iostream>
#include <string>

std::string encrypt(const std::string& s) {
    std::string result = s; // Create a copy of the input string
    for (char c : s) {
        if (c == 'a') c = 'e';
        else if (c == 'A') c = 'E';
    }
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::cout << encrypt(input) << std::endl;
}