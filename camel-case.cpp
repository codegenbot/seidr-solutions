#include <iostream>
#include <string>
#include <vector>

std::string camelCase(std::string str) {
    std::vector<std::string> words = {"");
    for (char c : str) {
        if (c == '-') {
            words.back() += c;
        } else if (c == ' ') {
            words.push_back("");
        } else {
            words.back() += tolower(c);
        }
    }

    std::string result = "";
    for (int i = 0; i < words.size(); i++) {
        if (!result.empty()) {
            if (i > 0) {
                result[0] = toupper(result[0]);
            }
        }
        result += words[i];
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