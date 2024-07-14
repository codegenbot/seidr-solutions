#include <vector>
#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::vector<std::string> words;
    size_t start = 0, end;
    while ((end = s.find '-') != std::string::npos) {
        words.push_back(s.substr(start, end - start));
        start = end + 1;
    }
    words.push_back(s.substr(start));

    std::string result;
    for (size_t i = 0; i < words.size(); ++i) {
        if (!result.empty()) {
            result += char(toupper(words[i][0]));
            result += words[i].substr(1);
        } else {
            result = words[i];
        }
    }

    return result;
}

int main() {
    std::string s;
    while (std::cin >> s) {
        std::cout << camelCase(s) << '\n';
    }
    return 0;
}