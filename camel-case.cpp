#include <vector>
#include <iostream>
#include <string>

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

std::string kebabToCamel(const std::string& s) {
    std::vector<std::string> words = split(s, '-');
    std::string result;
    bool capitalize = true;

    for (const auto& word : words) {
        if (capitalize) {
            result += toupper(word[0]);
            capitalize = false;
        } else {
            result += tolower(word[0]) + &word.substr(1);
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);
    std::cout << "CamelCase: " << kebabToCamel(input) << std::endl;

    return 0;
}