#include <iostream>
#include <string>
#include <vector>
#include <cctype>

std::vector<std::string> split(const std::string& s, char c) {
    std::vector<std::string> result;
    std::string temp;

    for (char x : s) {
        if (x == c) {
            result.push_back(temp);
            temp = "";
        } else {
            temp += x;
        }
    }
    result.push_back(temp);

    return result;
}

std::string camelCase(std::string s) {
    std::string result;
    bool first = true;

    for (char c : s) {
        if (c == '-') {
            if (!first) {
                result += char(toupper(c));
            }
            first = false;
        } else if (c == ' ') {
            if (!first) {
                result += char(toupper(c));
            }
            first = true;
        } else {
            if (first) {
                result += c;
            } else {
                result += char(tolower(c));
            }
            first = false;
        }
    }

    return result;
}

int main() {
    std::string line;
    std::string result;

    while (std::getline(std::cin, line)) {
        std::vector<std::string> words = split(line, '-');
        
        for (const auto& word : words) {
            if (!result.empty()) {
                result += camelCase(word);
            } else {
                result = camelCase(word);
            }
        }
    }

    std::cout << result;
}