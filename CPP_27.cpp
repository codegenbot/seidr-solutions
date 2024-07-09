#include <iostream>
#include <string>

std::string flip_case(const std::string& str) {
    std::string result;
    for (char c : str) {
        result += (c >= 'a' && c <= 'z') ? (c + ('A' - 'a')) : (c >= 'A' && c <= 'Z') ? (c + ('a' - 'A')) : c;
    }
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::cout << "Flipped case: " << flip_case(input) << std::endl;
    return 0;
}