#include <string>
#include <iostream>
#include <cassert>

std::string get_closest_vowel(const std::string& word) {
    auto is_vowel = [](char c) {
        std::string vowels = "aeiouAEIOU";
        return vowels.find(c) != std::string::npos;
    };

    for (int i = word.size() - 2; i > 0; --i) {
        if (is_vowel(word[i]) && !is_vowel(word[i - 1]) && !is_vowel(word[i + 1])) {
            return std::string(1, word[i]);
        }
    }
    return "";
}

int main() {
    assert(get_closest_vowel("Above") == "o");
    std::string word;
    std::cin >> word;
    std::cout << get_closest_vowel(word) << std::endl;
    return 0;
}