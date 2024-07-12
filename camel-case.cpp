#include <vector>
#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& str) {
    std::vector<std::string> words = {""};
    for (char c : str) {
        if (c == '-') {
            words.back() += ' ';
            words.push_back("");
        } else if (c == ' ') {
            words.back().back() = toupper(words.back().back());
            words.back() += ' ';
            words.push_back("");
        } else {
            words.back() += tolower(c);
        }
    }
    words.back().back() = toupper(words.back().back());
    return words.empty() ? "" : words[1];
}

int main() {
    std::string str;
    while (std::cin >> str) {
        std::cout << kebabToCamel(str) << std::endl;
    }
    return 0;
}