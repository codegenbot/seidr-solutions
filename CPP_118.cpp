#include <iostream>
#include <string>

std::string get_closest_vowel(const std::string& word) {
    std::string vowels = "aeiouAEIOU";
    int n = word.size();
    for (int i = n - 2; i > 0; --i) {
        if (vowels.find(word[i]) != std::string::npos && 
            vowels.find(word[i - 1]) == std::string::npos && 
            vowels.find(word[i + 1]) == std::string::npos) {
            return std::string(1, word[i]);
        }
    }
    return "";
}

int main() {
    std::cout << get_closest_vowel("Above") << std::endl;  // Should print "o"
    return 0;
}