#include <iostream>
#include <string>
#include <cassert>

std::string get_closest_vowel(const std::string &word) {
    auto is_vowel = [](char c) {
        std::string vowels = "aeiouAEIOU";
        return vowels.find(c) != std::string::npos;
    };

    int n = word.size();
    for (int i = n - 1; i >= 0; --i) {
        if (is_vowel(word[i])) {
            return std::string(1, word[i]);
        }
    }
    return "";
}