#include <vector>
#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::vector<std::string> words;
    size_t pos = 0;
    while ((pos = str.find(" ")) != std::string::npos) {
        words.push_back(str.substr(0, pos));
        str.erase(0, pos + 1);
    }
    words.push_back(str);

    std::string result;
    for (int i = 0; i < words.size(); i++) {
        if (!result.empty()) {
            result += std::toupper(words[i].at(0));
            for (int j = 1; j < words[i].size(); j++) {
                result += std::tolower(words[i][j]);
            }
        } else {
            for (char c : words[i]) {
                result += std::tolower(c);
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