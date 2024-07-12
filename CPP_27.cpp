```cpp
#include <iostream>
#include <string>

std::string flip_case(std::string& input) {
    std::string result;
    for (char c : input) {
        if (c >= 'a' && c <= 'z') {
            result += (c - ('a' - 'A')) + 0;
        } else if (c >= 'A' && c <= 'Z') {
            result += (c - ('A' - 'a')) + 0;
        } else {
            result += c;
        }
    }
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::cout << "Flipped case: " << flip_case(input) << std::endl;
}