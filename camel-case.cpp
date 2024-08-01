```
#include <vector>
#include <iostream>
#include <string>

std::string capitalize(const std::string& s) {
    if (s.empty()) {
        return s;
    }
    std::string result = (s[0] >= 'a' && s[0] <= 'z') ? std::string(1, s[0]) : std::string(1, toupper(s[0]));
    for (size_t i = 1; i < s.size(); ++i) {
        if (std::isupper(s[i])) {
            result += '-';
        }
        result += tolower(s[i]);
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

std::vector<std::string> split(const std::string& s, char c) {
    std::vector<std::string> result;
    size_t pos = 0;
    while ((pos = s.find(c)) != std::string::npos) {
        result.push_back(s.substr(0, pos));
        s.erase(0, pos + 1);
    }
    if (!s.empty()) {
        result.push_back(s);
    }
    return result;
}

std::string camelCase(const std::string& s) {
    std::vector<std::string> words = split(s, ' ');
    std::string result;

    for (const auto& word : words) {
        if (!word.empty()) { 
            if (!result.empty()) {
                result += capitalize(word.substr(1)); // Add capitalized word to result
            } else {
                result = capitalize(word); // First word, all caps
            }
        }
    }

    return result;
}