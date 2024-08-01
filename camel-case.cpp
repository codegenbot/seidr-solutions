#include <vector>
#include <iostream>
#include <string>

std::string capitalize(const std::string& s) {
    if (s.empty()) {
        return s;
    }

    std::string result = s[0] >= 'a' && s[0] <= 'z' ? (char)toupper(s[0]) : s[0];
    for (int i = 1; i < s.size(); ++i) {
        result += tolower(s[i]);
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

std::vector<std::string> split(const std::string& s, char c) {
    std::vector<std::string> words;

    size_t pos = 0;
    while ((pos = s.find(c)) != std::string::npos) {
        words.push_back(s.substr(0, pos));
        s.erase(0, pos + 1);
    }

    words.push_back(s);

    return words;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);

    std::cout << camelCase(input) << std::endl;

    return 0;
}