#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& str) {
    std::vector<std::string> words = {""};
    for (char c : str + " ") {
        if (c == '-') {
            words.back() += toupper(c + 1);
        } else if (c == ' ') {
            words.push_back("");
        } else {
            words.back() += tolower(c);
        }
    }
    std::string result;
    for (const auto& word : words) {
        if (!word.empty()) {
            result += word[0];
            for (int i = 1; i < word.size(); ++i) {
                result += toupper(word[i]);
            }
        }
    }
    return result;
}

int main() {
    std::string str;
    while (std::cin >> str) {
        std::cout << kebabToCamel(str) << std::endl;
    }
    return 0;
}