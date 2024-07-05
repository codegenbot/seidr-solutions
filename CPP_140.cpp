#include <iostream>
#include <string>

std::string fix_spaces(const std::string& text) {
    std::string result;
    int space_count = 0;
    for (char c : text) {
        if (c == ' ') {
            space_count++;
        } else {
            if (space_count == 1) {
                result += '_';
            } else if (space_count > 1) {
                result += '-';
            }
            space_count = 0;
            result += c;
        }
    }
    if (space_count == 1) {
        result += '_';
    } else if (space_count > 1) {
        result += '-';
    }
    return result;
}

int main() {
    std::string text;
    std::getline(std::cin, text);
    std::cout << fix_spaces(text) << std::endl;
    return 0;
}