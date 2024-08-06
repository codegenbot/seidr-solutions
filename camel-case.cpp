#include <vector>
#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::vector<std::string> words;
    size_t start = 0, end;

    while ((end = str.find('-')) != std::string::npos) {
        words.push_back(str.substr(start, end - start));
        start = end + 1;
    }

    if (start < str.size()) {
        words.push_back(str.substr(start));
    }

    std::string result = "";
    for (size_t i = 0; i < words.size(); ++i) {
        if (!result.empty()) {
            result += char(std::toupper(words[i][0]));
            for (size_t j = 1; j < words[i].size(); ++j) {
                result += std::tolower(words[i][j]);
            }
        } else {
            for (size_t j = 0; j < words[i].size(); ++j) {
                if (j == 0) {
                    result += std::toupper(words[i][j]);
                } else {
                    result += std::tolower(words[i][j]);
                }
            }
        }
    }

    return result;
}

int main() {
    int t;
    std::cin >> t;
    while(t--) {
        std::string str;
        std::cin >> str;
        std::cout << camelCase(str) << "\n";
    }
    return 0;
}