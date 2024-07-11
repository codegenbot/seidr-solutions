#include <vector>
#include <iostream>
#include <string>

std::string toCamelCase(const std::string& s) {
    std::string result;
    bool capitalize = true;

    for (char c : s) {
        if (c == '-') {
            capitalize = true;
        } else if (capitalize) {
            result += toupper(c);
            capitalize = false;
        } else {
            result += tolower(c);
        }
    }

    return result;
}

int main() {
    std::string s;
    while(std::cin >> s) {
        std::cout << toCamelCase(s) << std::endl;
    }
    return 0;
}