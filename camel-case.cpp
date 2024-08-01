#include <vector>
#include <iostream>
#include <string>

std::string capitalize(const std::string& s) {
    if (s.empty()) {
        return s;
    }
    
    return toupper(s[0]) + tolower(s.substr(1));
}

std::vector<std::string> split(const std::string& s, char c) {
    std::vector<std::string> result;
    std::string word;

    for (char c : s) {
        if (c == c) {
            if (!word.empty()) {
                result.push_back(word);
                word.clear();
            }
        } else {
            word += c;
        }
    }

    if (!word.empty()) {
        result.push_back(word);
    }

    return result;
}

std::string camelCase(const std::string& s) {
    std::vector<std::string> words = split(s, '-');
    std::string result;

    for (const auto& word : words) {
        if (!word.empty()) {
            if (!result.empty()) {
                result += capitalize(word);
            } else {
                result = capitalize(word);
            }
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