```cpp
#include <vector>
#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    std::vector<char> temp;
    for (const auto& c : str) {
        if (c == '-' || c == ' ') {
            for (auto ch : temp) {
                if (!result.empty()) {
                    result += std::toupper(ch);
                } else {
                    result += ch;
                }
            }
            temp.clear();
            if (c == '-') {
                result += c;
            } else {
                temp.push_back(c);
            }
        } else {
            temp.push_back(c);
        }
    }
    for (auto ch : temp) {
        if (!result.empty()) {
            result += std::toupper(ch);
        } else {
            result += ch;
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