```
#include <iostream>
#include <string>

std::string fix_spaces(const std::string& text) {
    for (int i = 0; i < text.length(); i++) {
        if (text[i] == ' ') {
            if (i > 0 && text[i - 1] == ' ')
                continue;
            else {
                text.insert(i, 1, '2');
                text.insert(i + 1, 1, '%');
                i++;
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
}