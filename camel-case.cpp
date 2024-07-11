#include <vector>
#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::vector<std::string> words = {""};
    for (char c : str) {
        if (c == ' ') {
            words.back() += c;
        } else if (c == '-') {
            words.back() += c;
        } else {
            words.push_back(std::string(1, c));
        }
    }

    std::string result = "";
    for (int i = 0; i < words.size(); ++i) {
        if (!result.empty()) {
            result[0] -= 32;
        }
        for (char c : words[i]) {
            if (c >= 'a' && c <= 'z') {
                result += c;
            } else {
                result += toupper(c);
            }
        }
    }

    return result;
}

int main() {
    std::string str;
    while (std::cin >> str) {
        std::cout << camelCase(str) << std::endl;
    }
    return 0;
}