```cpp
#include <vector>
#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    for (const auto& c : str) {
        if (c == '-' || c == ' ') {
            if (!result.empty()) {
                result += std::toupper(c);
            } else {
                result += c;
            }
        } else if (!result.empty()) {
            result += std::tolower(c);
        } else {
            result += c;
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