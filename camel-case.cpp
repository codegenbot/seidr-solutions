```cpp
#include <vector>
#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    bool nextUpper = true;
    for (const auto& c : str) {
        if (c == '-' || c == ' ') {
            if (!nextUpper) {
                result += c;
            } else {
                if (c == '-') {
                    result += ' ';
                }
                nextUpper = false;
            }
        } else {
            nextUpper = true;
            if (result.empty()) {
                result += std::tolower(c);
            } else {
                result += std::toupper(c);
            }
        }
    }
    return result;
}

int main() {
    std::string str;
    while (std::getline(std::cin, str)) {
        std::cout << camelCase(str) << std::endl;
    }
    return 0;
}