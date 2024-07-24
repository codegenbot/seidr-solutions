#include <string>
#include <cctype>

bool isVowel(char c);
std::string get_closest_vowel(std::string word);

std::string get_closest_vowel(std::string word) {
    for (int i = word.length() - 1; i >= 0; --i) {
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || 
            word[i] == 'o' || word[i] == 'u') {
            for (int j = i - 1; j >= 0; --j) {
                if (!isVowel(word[j])) {
                    return std::string(1, tolower(word[i]));
                }
            }
        }
    }
    return "";
}

bool isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}