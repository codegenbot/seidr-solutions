#include <vector>
#include <iostream>
#include <string>

std::string kebabToCamel(std::string s) {
    std::stringstream ss;
    bool capitalize = true;

    for (char c : s) {
        if (c == '-') {
            capitalize = true;
        } else {
            if (capitalize) {
                ss << toupper(c);
                capitalize = false;
            } else {
                ss << tolower(c);
            }
        }
    }

    return ss.str();
}

int main() {
    std::string s;
    while (std::cin >> s) {
        std::cout << kebabToCamel(s) << std::endl;
    }
    return 0;
}