#include <iostream>
#include <string>

std::string fix_spaces(std::string text) {
    std::string result = "";
    for (int i = 0; i < text.length(); i++) {
        if (text[i] == ' ') {
            if (i > 0 && result[result.length() - 1] == ' ' && result.length() >= 2) {
                result += "-";
            } else {
                result += "_";
            }
        } else {
            result += text[i];
        }
    }
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::cout << "Fixed string: " << fix_spaces(input) << std::endl;
    return 0;
}