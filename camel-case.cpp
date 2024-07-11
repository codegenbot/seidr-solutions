#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& s) {
    std::string result;
    bool nextWord = true;

    for (char c : s) {
        if (c == '-') {
            nextWord = true;
        } else if (nextWord) {
            result += toupper(c);
            nextWord = false;
        } else {
            result += tolower(c);
        }
    }

    return result;
}

int main() {
    std::string s;
    while (std::cin >> s) {
        std::cout << kebabToCamel(s) << std::endl;
    }
    return 0;
}