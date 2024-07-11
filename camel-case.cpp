#include <vector>
#include <iostream>
#include <string>

std::string kebabToCamel(const std::string &s) {
    std::string result = "";
    size_t pos = 0;
    while (pos != s.npos) {
        size_t nextDashPos = s.find('-', pos);
        if (nextDashPos == s.npos)
            break;
        std::string word = s.substr(pos, nextDashPos - pos);
        if (!result.empty()) {
            result += char(int(word[0]) & ~int('a' - 1));
        }
        else
            result += word;
        pos = nextDashPos + 1;
    }
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);
    std::cout << "The equivalent camelCase string is: " << kebabToCamel(input) << std::endl;
    return 0;
}