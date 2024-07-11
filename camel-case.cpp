#include <iostream>
#include <string>
#include <sstream>

std::string camelCase(const std::string& str) {
    std::stringstream ss(str);
    std::string word;
    std::string result;

    while (getline(ss, word, '-')) {
        if (!result.empty()) {
            result[0] = toupper(word[0]);
        } else {
            result += word;
        }
        for (size_t i = 1; i < word.size(); ++i) {
            result += tolower(word[i]);
        }
    }

    return result;
}

int main() {
    std::string str;
    while (std::cin >> str) {
        std::cout << camelCase(str) << '\n';
    }
    return 0;
}