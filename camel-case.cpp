#include <algorithm>
#include <string>
#include <cctype>
#include <iostream>
#include <vector>

std::string camelCase(std::string str) {
    std::string result = "";
    std::vector<std::string> words;
    size_t pos = 0;

    // Split input string by "-"
    while ((pos = str.find("-")) != std::string::npos) {
        words.push_back(str.substr(0, pos));
        str.erase(0, pos + 1);
    }

    if (!str.empty()) {
        words.push_back(str);
    }

    for (const auto& word : words) {
        if (result.empty()) {
            result = std::toupper(word);
        } else {
            result += " " + std::tolower(word[0]) + std::toupper(word.substr(1));
        }
    }

    return result;
}

int main() {
    std::string input = "camel-case example-test-string";
    std::cout << camelCase(input) << std::endl;
    return 0;
}