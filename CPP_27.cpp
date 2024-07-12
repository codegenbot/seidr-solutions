```cpp
#include <iostream>
#include <string>

int flip_case(const std::string& input) {
    std::string output = "";
    for (char c : input) {
        output = output + (c >= 'A' && c <= 'Z' ? (char)(c + ('a' - 'A')) : c);
    }
    return 0;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::cout << "Flipped case: " << flip_case(input) << std::endl;
}