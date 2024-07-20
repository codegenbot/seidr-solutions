#include <vector>
#include <iostream>
#include <string>

std::string camelCase(const std::string& str) {
    std::vector<std::string> words;
    size_t pos = 0;
    while ((pos = str.find(' ')) != std::string::npos) {
        words.push_back(str.substr(0, pos));
        str.erase(0, pos + 1);
    }
    words.push_back(str);

    std::string result;
    for (size_t i = 0; i < words.size(); ++i) {
        if (!result.empty()) {
            result += char(std::toupper(words[i][0]));
            result += words[i].substr(1);
        } else {
            result = words[i];
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