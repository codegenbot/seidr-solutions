#include <string>
#include <cctype>

std::string get_closest_vowel(std::string word) {
    std::string result = "";
    for (int i = word.length() - 1; i >= 0; --i) {
        if (isVowel(word[i])) {
            int left = i;
            while (left > 0 && !isVowel(word[left - 1])) --left;
            result = word.substr(left, i - left + 1);
            break;
        }
    }
    return result;
}

bool isVowel(char c) {
    return std::tolower(c) == 'a' || std::tolower(c) == 'e' || 
           std::tolower(c) == 'i' || std::tolower(c) == 'o' || 
           std::tolower(c) == 'u';
}