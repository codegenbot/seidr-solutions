#include <vector>
#include <iostream>
#include <string>

std::string capitalize(const std::string& s) {
    if (s.empty()) {
        return s;
    }
    std::string result = "";
    char c = toupper(s[0]);
    result += c;
    for (int i = 1; i < s.size(); ++i) {
        c = tolower(s[i]);
        result += c;
    }
    return result;
}

std::vector<std::string> split(const std::string& s, char delimiter) {
    std::vector<std::string> words;
    std::string word = "";
    for (char c : s) {
        if (c == delimiter) {
            words.push_back(word);
            word = "";
        } else {
            word += c;
        }
    }
    if (!word.empty()) {
        words.push_back(word);
    }
    return words;
}

std::string camelCase(const std::string& s) {
    std::vector<std::string> words = split(s, '-');
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

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);

    std::cout << camelCase(input) << std::endl;

    return 0;
}