#include <iostream>
#include <string>
#include <cctype>
#include <vector>

std::string camelCase(std::string& str) {
    std::vector<std::string> words;
    for (char c : str) {
        if (c == '-' || c == ' ') {
            if (!str.empty() && str[str.find(c) - 1] != '-') {
                words.push_back(str.substr(0, str.find(c)));
                str.erase(0, str.find(c) + 1);
            }
        }
    }

    if (!str.empty()) {
        words.push_back(str);
    }

    std::string result;
    for (int i = 0; i < words.size(); i++) {
        if (i > 0) {
            result += toupper(words[i][0]);
        } else {
            result += words[i];
        }
        if (i < words.size() - 1) {
            result += " ";
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);
    std::cout << camelCase(input) << std::endl;
    return 0;
}