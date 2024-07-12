#include <iostream>
#include <string>

std::string fix_spaces(std::string text) {
    string result = "";
    for (int i = 0; i < text.length(); i++) {
        if (text[i] == ' ') {
            if (i > 0 && text[i-1] == ' ') {
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
    std::cout << fix_spaces("   Exa 1 2 2 mple") << std::endl;
    return 0;
}