#include <iostream>
#include <string>
#include <cassert>

std::string get_closest_vowel(const std::string &word) {
    auto is_vowel = [](char c) {
        std::string vowels = "aeiouAEIOU";
        return vowels.find(c) != std::string::npos;
    };

    int n = word.size();
    for (int i = n - 1; i > 0; --i) {
        if (!is_vowel(word[i]) && i - 1 >= 0 && is_vowel(word[i - 1])) {
            return std::string(1, word[i - 1]);
        }
    }
    return "";
}

int main() {
    assert(get_closest_vowel("Above") == "o");
    std::cout << "Test passed!" << std::endl;
    return 0;
}