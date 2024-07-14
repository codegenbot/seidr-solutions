#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& str) {
    std::vector<std::string> words = {""};
    for (char c : str) {
        if (c == '-') {
            words.back() += ' ';
            words.push_back("");
        } else if (c == ' ') {
            continue;
        } else {
            words.back().push_back(c);
        }
    }

    std::string result = "";
    for (const auto& word : words) {
        if (!word.empty()) {
            result += word[0];
            for (int i = 1; i < word.size(); i++) {
                result += char(toupper(word[i]));
        }
    }
    return result;
}

int main() {
    std::string str;
    while (true) {
        std::cout << "Enter a string in kebab-case: ";
        std::cin >> str;
        std::cout << "The camelCase equivalent is: " << kebabToCamel(str) << '\n';
    }
    return 0;
}