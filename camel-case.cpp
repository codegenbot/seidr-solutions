```cpp
#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    if (str.empty()) {
        return str;
    }
    std::string result = "";
    bool isNextUpper = false;

    for (const auto& c : str) {
        if (c == '-' || c == ' ') {
            if (!isNextUpper) {
                if (c == '-') {
                    result += std::toupper(c);
                } else {
                    result += ' ';
                }
            }
            isNextUpper = true;
        } else {
            isNextUpper = false;
            if (!result.empty()) {
                result += std::tolower(c);
            } else {
                result += c;
            }
        }
    }

    // Remove the leading space and convert to uppercase
    if (!result.empty() && result[0] == ' ') {
        result.erase(0, 1);
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