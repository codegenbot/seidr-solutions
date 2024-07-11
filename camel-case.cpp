#include <vector>
#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& s) {
    std::string result;
    size_t pos = 0;

    while (pos < s.length()) {
        size_t nextDashPos = s.find("-", pos);
        if (nextDashPos == std::string::npos) {
            result += toupper(s.substr(pos));
            break;
        }

        size_t wordLength = nextDashPos - pos;
        result += toupper(s.substr(pos, wordLength));
        pos = nextDashPos + 1;
    }

    return result;
}

int main() {
    std::string input;
    std::cin >> input;
    std::cout << kebabToCamel(input) << std::endl;

    return 0;
}