#include <vector>
#include <iostream>
#include <string>

std::string capitalize(const std::string& s) {
    if (s.empty()) {
        return s;
    }

    std::string result = "";
    bool capitalizeNext = true;

    for (char c : s) {
        if (capitalizeNext) {
            result += toupper(c);
            capitalizeNext = false;
        } else {
            result += tolower(c);
        }
    }

    return result;
}

std::vector<std::string> split(const std::string& s, char delimiter) {
    std::vector<std::string> words;

    size_t pos = 0;
    while ((pos = s.find(delimiter)) != std::string::npos) {
        words.push_back(s.substr(0, pos));
        s.erase(0, pos + 1);
    }

    if (!s.empty()) {
        words.push_back(s);
    }

    return words;
}

std::string camelCase(const std::string& s) {
    std::vector<std::string> words = split(s, '-');
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