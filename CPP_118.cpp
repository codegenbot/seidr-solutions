#include <string>
#include <cctype>

std::string get_closest_vowel(std::string word) {
    int left = 0;
    for (int right = word.size() - 1; right >= 0 && !isVowel(word[right]); right--) {
        left = right + 1;
    }
    for (int i = left; i < word.size(); i++) {
        if (isVowel(word[i])) {
            return string(1, tolower(word[i]));
        }
    }
    return "";
}

bool isVowel(char c) {
    return std::tolower(c) == 'a' || std::tolower(c) == 'e' || 
           std::tolower(c) == 'i' || std::tolower(c) == 'o' || 
           std::tolower(c) == 'u';
}