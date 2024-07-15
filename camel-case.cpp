#include <vector>
#include <iostream>
#include <string>
#include <sstream>

std::string kebabToCamel(const std::string& str) {
    std::string result;
    bool capitalize = true;

    for (char c : str) {
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
    std::string input;
    while (std::getline(std::cin, input)) {
        std::istringstream iss(input);
        std::string word;
        std::cout << kebabToCamel(iss.str()) << std::endl;
    }
    return 0;
}