#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& s) {
    std::string result;
    bool inWord = false;
    for (char c : s) {
        if (c == '-') {
            inWord = true;
            continue;
        }
        if (!inWord) {
            result += tolower(c);
        } else {
            result += toupper(c);
            inWord = false;
        }
    }
    return result;
}

int main() {
    std::cout << kebabToCamel("nospaceordash") << std::endl;
    std::cout << kebabToCamel("two-words") << std::endl;
    std::cout << kebabToCamel("two words") << std::endl;
    std::cout << kebabToCamel("all separate words") << std::endl;
    return 0;
}