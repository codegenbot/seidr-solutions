#include <vector>
#include <iostream>
#include <string>

std::string kebabToCamelCase(const std::string& str) {
    std::string result;
    for (char c : str) {
        if (c == '-') {
            result += c + char(toupper(str.find(c) + 1));
        } else {
            result += c;
        }
    }
    return result;
}

int main() {
    std::cout << kebabToCamelCase("nospaceordash") << std::endl;
    std::cout << kebabToCamelCase("two-words") << std::endl;
    std::cout << kebabToCamelCase("two words") << std::endl;
    std::cout << kebabToCamelCase("all separate words") << std::endl;
    return 0;
}