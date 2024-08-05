#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::vector<std::string> words;
    size_t start = 0;
    for (size_t i = 0; i <= str.size(); ++i) {
        if (i == str.size() || str[i] == '-') {
            words.push_back(str.substr(start, i - start));
            start = i + 1;
        }
    }

    std::string result;
    for (const auto& word : words) {
        if (!result.empty()) {
            result += std::string(1, char(toupper((word[0]))));
            result.erase(0, 1);
        } else {
            result = word;
        }
    }
    return result;
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        std::string s; 
        std::cin >> s;
        std::cout << camelCase(s) << std::endl; 
    }
    return 0;
}