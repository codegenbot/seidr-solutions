#include <vector>
#include <iostream>
#include <string>

std::string camelCase(const std::string& str) {
    std::vector<std::string> words;
    if (str.find(' ') == std::string::npos)
        words.push_back(str);
    else {
        size_t pos = 0;
        while ((pos = str.find(' ')) != std::string::npos) {
            words.push_back(str.substr(0, pos));
            str.erase(0, pos + 1);
        }
        if (!str.empty())
            words.push_back(str);
    }

    std::string result;
    bool capitalizeNext = true;

    for (const auto& word : words) {
        for (char c : word) {
            if (capitalizeNext && !std::isalpha(c)) {
                result += c;
                capitalizeNext = false;
            } else {
                if (c == '-') {
                    result += ' ';
                    capitalizeNext = true;
                } else if (capitalizeNext) {
                    result += toupper(c);
                    capitalizeNext = false;
                } else {
                    result += tolower(c);
                }
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