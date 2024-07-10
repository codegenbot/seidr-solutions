#include <iostream>
#include <string>
#include <cctype>

std::string camelCase(std::string str) {
    std::vector<std::string> words;
    bool inWord = false;

    for (char c : str) {
        if (!inWord && c == '-') {
            inWord = true;
        } else if (inWord && c != '-') {
            inWord = false;
            words.push_back(c);
        } else if (!inWord && !std::isalnum(c)) {
            continue;
        } else {
            if (c == '-') {
                continue;
            }
            if (inWord) {
                if (!std::islower(c)) {
                    words.back().push_back(std::toupper(c));
                } else {
                    words.back() += c;
                }
            } else {
                words.push_back(std::tolower(c));
                inWord = true;
            }
        }
    }

    std::string result;
    for (int i = 0; i < words.size(); i++) {
        if (i > 0) {
            result += std::toupper(words[i][0]);
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
    std::string str;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, str);
    std::cout << "CamelCase: " << camelCase(str) << std::endl;
    return 0;
}