#include <iostream>
#include <string>

std::string get_closest_vowel(const std::string &word) {
    auto is_vowel = [](char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
               c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    };

    for (int i = word.length() - 2; i > 0; --i) {
        if (is_vowel(word[i]) && !is_vowel(word[i - 1]) && !is_vowel(word[i + 1])) {
            return std::string(1, word[i]);
        }
    }

    return "";
}

int main() {
    std::cout << get_closest_vowel("Above") << std::endl;
    return 0;
}