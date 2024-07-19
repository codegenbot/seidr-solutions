#include <iostream>
#include <string>

std::string fix_spaces(const std::string& text) {
    for (auto it = text.begin(); it != text.end(); ++it) {
        if (*it == ' ') {
            if (it != text.begin() && *(it - 1) == ' ')
                continue;
            else {
                *it = "20%";
            }
        }
    }
    return text;
}

int main() {
    std::cout << "Enter a string: ";
    std::string text;
    getline(std::cin, text);
    for (char &c : text) {
        c = tolower((unsigned char)c);
    }
    std::cout << "Fixed string: " << fix_spaces(text) << std::endl;
    return 0;
}