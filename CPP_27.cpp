```cpp
#include <iostream>
#include <string>

std::string flip_case(const std::string& input) {
    std::string output;
    for (char c : input) {
        if (std::isalpha(c)) {
            if (std::isupper(c)) {
                output += static_cast<char>(std::tolower(c));
            } else {
                output += static_cast<char>(std::toupper(c));
            }
        } else {
            output += static_cast<char>(c);
        }
    }
    return output;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::cout << "Flipped case: " << flip_case(input) << std::endl;
}