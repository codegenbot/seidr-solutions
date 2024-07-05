#include <iostream>
#include <string>
#include <cassert>

std::string get_closest_vowel(const std::string& word) {
    std::string vowels = "aeiouAEIOU";
    for (int i = word.length() - 2; i > 0; --i) {
        if (vowels.find(word[i]) != std::string::npos && 
            vowels.find(word[i - 1]) == std::string::npos && 
            vowels.find(word[i + 1]) == std::string::npos) {
            return std::string(1, word[i]);
        }
    }
    return "";
}

int main() {
    assert(get_closest_vowel("Above") == "o");
    assert(get_closest_vowel("Example") == "");
    std::cout << "All tests passed!" << std::endl;
    return 0;
}