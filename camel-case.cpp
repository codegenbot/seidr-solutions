```#include <vector>
#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& s) {
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
    std::string input;
    for (char c : std::cin.rdbuf()->sgetn(&input[0], 256)) {
        if (c == '\n' || !c) break;
    }
    std::cout << kebabToCamel(input) << std::endl;

    return 0;
}