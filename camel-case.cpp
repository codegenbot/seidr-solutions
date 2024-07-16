#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& str) {
    std::string result;
    for (char c : str) {
        if (c == '-') {
            if (!result.empty()) {
                result[0] = toupper(result[0]);
            }
            result += " ";
        } else if (c == ' ') {
            if (!result.empty() && result.back() != '-') {
                result[0] = toupper(result[0]);
            }
            result += " ";
        } else {
            result += c;
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