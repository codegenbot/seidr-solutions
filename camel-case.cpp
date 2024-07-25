#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& str) {
    if (str.empty()) return str;

    std::string result;
    bool capitalize = true;

    for (char c : str) {
        if (c == '-') {
            capitalize = true;
        } else if (capitalize) {
            result += std::toupper(c);
            capitalize = false;
        } else {
            result += std::tolower(c);
        }
    }

    return result;
}

int main() {
    std::string str;
    while (std::cin >> str) {
        std::cout << kebabToCamel(str) << std::endl;
    }
    return 0;
}