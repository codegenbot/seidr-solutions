#include <vector>
#include <iostream>
#include <string>

std::string toCamelCase(const std::string& input) {
    std::string output;
    bool capitalize = true;

    for (char c : input) {
        if (c == '-') {
            capitalize = true;
        } else if (capitalize) {
            output += toupper(c);
            capitalize = false;
        } else {
            output += tolower(c);
        }
    }

    return output;
}

int main() {
    std::string s;
    while(std::cin >> s) {
        std::cout << toCamelCase(s) << std::endl;
    }
    return 0;
}