#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

std::string camelCase(const std::string& str) {
    std::string result;
    bool capitalize = true;

    for (const auto& word : split(str, '-')) {
        if (!capitalize) {
            result += ' ';
        }
        for (char c : word) {
            if (capitalize) {
                result += toupper(c);
                capitalize = false;
            } else {
                result += tolower(c);
            }
        }
        capitalize = true;
    }

    return result;
}

std::vector<std::string> split(const std::string& str, char delimeter) {
    std::vector<std::string> result;
    std::string temp;

    for (char c : str) {
        if (c == delimeter) {
            if (!temp.empty()) {
                result.push_back(temp);
                temp = "";
            }
        } else {
            temp += c;
        }
    }

    if (!temp.empty()) {
        result.push_back(temp);
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);

    std::cout << "camelCase: " << camelCase(input) << std::endl;

    return 0;
}