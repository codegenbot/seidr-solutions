```
#include <iostream>
#include <string>

std::string fix_spaces(const std::string& str) {
    std::string result = "";
    for (char c : str) {
        if (c == ' ') {
            result += "%20";
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
    std::cout << fix_spaces(input) << std::endl;
    return 0;
}