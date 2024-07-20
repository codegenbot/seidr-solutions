#include <string>
#include <cctype>
#include <algorithm>

std::string get_closest_vowel(std::string word) {
    int n = word.size();
    for (int i = n - 1; i > 0; --i) {
        if (!isalpha(word[i])) continue;
        if (std::tolower(word[i]) == 'a' || std::tolower(word[i]) == 'e' || 
            std::tolower(word[i]) == 'i' || std::tolower(word[i]) == 'o' || 
            std::tolower(word[i]) == 'u') {
            return std::string(1, word[i]);
        }
        while (!isalpha(word[--i]) && i > 0);
        if (std::tolower(word[i]) == 'a' || std::tolower(word[i]) == 'e' || 
            std::tolower(word[i]) == 'i' || std::tolower(word[i]) == 'o' || 
            std::tolower(word[i]) == 'u') {
            return std::string(1, word[i]);
        }
    }
    return "";
}