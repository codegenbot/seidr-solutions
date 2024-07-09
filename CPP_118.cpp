#include <string>

std::string get_closest_vowel(const std::string& word) {
    std::string vowels = "aeiouAEIOU";
    int n = word.size();
    for (int i = 0; i < n; ++i) {
        if(vowels.find(word[i]) != std::string::npos && (i == 0 || !isalpha(word[i - 1])) && 
            (i == n - 1 || !isalpha(word[i + 1]))) {
            return std::string(1, word[i]);
        }
    }
    return "";
}