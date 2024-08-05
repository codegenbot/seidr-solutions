#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& str) {
    std::vector<std::string> words = {""};
    for (char c : str) {
        if (c == '-') {
            words.back() += " ";
            words.push_back("");
        } else {
            words.back() += c;
        }
    }
    std::string result = "";
    for (const auto& word : words) {
        if (!word.empty()) {
            if (!result.empty())
                result += char(std::toupper(word[0]));
            result += word.substr(1);
        }
    }
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);
    std::cout << "CamelCase version: " << kebabToCamel(input) << "\n";
    return 0;
}