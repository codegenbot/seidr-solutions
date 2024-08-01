```
#include <vector>
#include <iostream>
#include <string>

std::string capitalize(const std::string& s) {
    if (s.empty()) {
        return s;
    }

    std::string result = "";
    bool firstChar = true;

    for (char c : s) {
        if (!firstChar) {
            result += tolower(c);
        } else {
            result += toupper(c);
            firstChar = false;
        }
    }

    return result;
}

std::vector<std::string> split(const std::string& str, char ch) {
    std::vector<std::string> tokens;

    size_t pos = 0;
    size_t lastPos = 0;

    while ((pos = str.find(ch, lastPos)) != std::string::npos) {
        tokens.push_back(str.substr(lastPos, pos - lastPos));
        lastPos = pos + 1;
    }

    tokens.push_back(str.substr(lastPos));

    return tokens;
}

std::string camelCase(const std::string& s) {
    std::vector<std::string> words = split(s, ' ');

    std::string result;

    for (const auto& word : words) {
        if (!word.empty()) { // Ignore empty strings
            if (!result.empty()) {
                result += capitalize(word.substr(1)); // Add capitalized word to result
            } else {
                result = capitalize(word); // First word, all caps
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