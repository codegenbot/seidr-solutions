#include <iostream>
#include <string>
#include <vector>
#include <cctype>

std::string camelCase(const std::string& str) {
    std::string result;
    bool capitalizeNext = true;

    for (char c : str) {
        if (c == '-') {
            capitalizeNext = true;
        } else if (capitalizeNext) {
            result += toupper(c);
            capitalizeNext = false;
        } else {
            result += tolower(c);
        }
    }

    return result;
}

int main() {
    std::string input;
    char c;
    std::vector<std::string> words;

    while ((c = getchar()) != '\n') {
        if (c == '-') {
            input += c;
        } else {
            if (!input.empty()) {
                words.push_back(input);
                input.clear();
            }
            input += c;
        }
    }

    if (!input.empty()) {
        words.push_back(input);
    }

    for (int i = 0; i < words.size(); ++i) {
        if (i > 0) {
            words[i] = std::string(1, toupper(words[i][0])) + words[i].substr(1).toLowerCase();
        }
    }

    for (const auto& word : words) {
        std::cout << word;
    }

    return 0;
}