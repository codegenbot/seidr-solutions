```
#include <vector>
#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    std::vector<char> temp;
    for (const auto& word : str) {
        if (word == '-' || word == ' ') {
            for (auto c : temp) {
                if (!result.empty()) {
                    result += std::toupper(c);
                } else {
                    result += c;
                }
            }
            temp.clear();
            if (word == '-') {
                result += word;
            } else {
                temp.push_back(word);
            }
        } else {
            temp.push_back(word);
        }
    }
    for (auto c : temp) {
        if (!result.empty()) {
            result += std::toupper(c);
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