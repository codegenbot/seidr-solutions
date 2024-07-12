#include <vector>
#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& str) {
    std::vector<std::string> words = {""};
    for (char c : str) {
        if (c == '-') {
            words.back().back() = toupper(words.back().back());
            words.push_back("");
        } else if (c != ' ') {
            if (words.back().empty()) {
                words.back() += tolower(c);
            } else {
                words.back() += c;
            }
        }
    }
    return " " + words[0];
}

int main() {
    std::string str;
    while (std::cin >> str) {
        std::cout << kebabToCamel(str) << std::endl;
    }
    return 0;
}