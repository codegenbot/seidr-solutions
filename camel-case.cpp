#include <iostream>
#include <string>

std::string kebabToCamel(std::string str) {
    std::vector<std::string> words = {""};
    for (char c : str) {
        if (c == '-') {
            words.back() += ' ';
            words.push_back("");
        } else if (c != ' ') {
            words.back() += c;
        }
    }
    std::string result = "";
    for (int i = 0; i < words.size(); ++i) {
        if (!result.empty()) {
            result[0] -= 32;
        }
        result += words[i];
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