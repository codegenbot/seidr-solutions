#include <vector>
#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& s) {
    std::string result;
    bool capitalize = true;

    for (char c : s) {
        if (c == '-') {
            if (s.find(c) < s.size() - 1 && std::isalpha(s[s.find(c) + 1])) {
                capitalize = true;
            } else {
                result += c;
            }
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
    std::string input;
    std::cin >> input;
    std::cout << kebabToCamel(input) << std::endl;

    return 0;
}