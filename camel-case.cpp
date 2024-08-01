```
#include <vector>
#include <iostream>
#include <string>

std::string capitalize(const std::string& s) {
    if (s.empty()) return s;
    std::string result = (s[0] >= 'a' && s[0] <= 'z') ? toupper(s[0]) : tolower(s[0]);
    for (int i = 1; i < s.size(); ++i) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            result += tolower(s[i]);
        } else {
            result += s[i];
        }
    }
    return result;
}

std::string camelCase(const std::string& s) {
    std::vector<std::string> words = split(s, ' ');
    std::string result;

    for (const auto& word : words) {
        if (!word.empty()) { 
            if (!result.empty()) {
                result += capitalize(word.substr(1)); 
            } else {
                result = capitalize(word); 
            }
        }
    }

    return result;
}

std::vector<std::string> split(const std::string& s, char c) {
    std::vector<std::string> words;
    std::string word;

    for (char ch : s) {
        if (ch == c) {
            words.push_back(word);
            word = "";
        } else {
            word += ch;
        }
    }

    if (!word.empty()) {
        words.push_back(word);
    }

    return words;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);

    std::cout << camelCase(input) << std::endl;

    return 0;
}