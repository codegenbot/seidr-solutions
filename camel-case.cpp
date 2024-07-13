#include <vector>
#include <iostream>
#include <string>

std::string toCamelCase(const std::string& str) {
    std::string result = "";
    for (char c : str) {
        if (c == '-') {
            if (!result.empty()) {
                result.push_back(char(toupper(result.back())));
            }
        } else if (c != ' ') {
            result += tolower(c);
        }
    }
    return result;
}

int main() {
    std::string input;
    std::cin >> input;
    std::cout << toCamelCase(input) << std::endl;
    return 0;
}