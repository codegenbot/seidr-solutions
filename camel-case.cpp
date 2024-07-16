#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& s) {
    std::string result;
    for (char c : s) {
        if (c == '-') {
            result += c + (result.empty() ? "" : " ");
        } else {
            result += toupper(c);
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