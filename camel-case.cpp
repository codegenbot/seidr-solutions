```c
#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::vector<std::string> words;
    size_t start = 0;
    for (size_t i = 0; i <= str.size(); ++i) {
        if (i == str.size() || str[i] == ' ') {
            words.push_back(str.substr(start, i - start));
            start = i + 1;
        }
    }

    std::string result;
    for (size_t i = 0; i < words.size(); ++i) {
        if (!result.empty()) {
            result += (char)toupper(words[i][0]);
            for (size_t j = 1; j < words[i].size(); ++j) {
                result += tolower(words[i][j]);
            }
        } else {
            for (size_t j = 0; j < words[i].size(); ++j) {
                result += tolower(words[i][j]);
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