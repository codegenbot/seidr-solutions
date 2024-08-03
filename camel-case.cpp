#include <vector>
#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& str) {
    std::vector<std::string> words;
    size_t start = 0, end;

    while ((end = str.find(' ')) != std::string::npos) {
        words.push_back(str.substr(start, end - start));
        start = end + 1;
    }

    words.push_back(str.substr(start));

    std::string result;
    for (size_t i = 0; i < words.size(); ++i) {
        if (!result.empty()) {
            result += words[i].substr(0, 1).toupper() + words[i].substr(1);
        } else {
            result = words[i];
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