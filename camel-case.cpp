#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

std::string camelCase(const std::string& s) {
    std::vector<std::string> words;
    for (const auto& word : s.split '-') {
        if (!words.empty()) {
            words.back() + tolower(word[0]) + word.substr(1);
        } else {
            words.push_back(tolower(word));
        }
    }

    return words.size() > 0 ? words.back() : "";
}

std::string_view operator""sv(const char* data, std::size_t length) {
    return std::string_view(data, length);
}