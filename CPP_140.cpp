#include <iostream>
#include <string>
#include <algorithm>

std::string fix_spaces(const std::string& text) {
    for (int i = 0; i < text.length(); i++) {
        if (text[i] == ' ') {
            if (i > 0 && text[i - 1] == ' ')
                continue;
            else
                text.insert(i, "%20");
        }
    }
    return text;
}

int main() {
    std::cout << "Enter a string: ";
    std::string text;
    getline(std::cin, text);
    for (auto &c : text) c = std::tolower(c);
    std::cout << "Fixed string: " << fix_spaces(text) << std::endl;
    return 0;
}