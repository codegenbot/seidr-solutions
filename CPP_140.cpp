#include <iostream>
#include <string>

std::string fix_spaces(std::string text) {
    std::string result = "";
    for (int i = 0; i < text.length(); i++) {
        if (text[i] == ' ') {
            if (i > 0 && result.back() == ' ' && result.size() >= 2) {
                result += '-';
            } else {
                result += '_';
            }
        } else {
            result += text[i];
        }
    }
    return result;
}

int main() {
    std::string text;
    std::cout << "Enter the text: ";
    std::getline(std::cin, text);
    std::cout << "Fixed text: " << fix_spaces(text) << std::endl;
    return 0;
}