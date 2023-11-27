#include <iostream>
#include <string>
#include <algorithm>

std::string get_closest_vowel(const std::string& word) {
    std::string vowels = "aeiouAEIOU";
    int n = word.size();
    for (int i = n - 3; i >= 1; i--) {
        if (vowels.find(word[i]) != std::string::npos &&
            !std::isalpha(word[i-1]) && std::isalpha(word[i-2])) {
            return std::string(1, word[i]);
        }
    }
    return "";
}

int main() {
    std::string word;
    std::cin >> word;
    std::cout << get_closest_vowel(word) << std::endl;
    return 0;
}