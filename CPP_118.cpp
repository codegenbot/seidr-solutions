```cpp
#include <string>
#include <cctype>

std::string get_closest_vowel(std::string word) {
    int left = 0;
    for (int right = word.size() - 1; right >= 0 && !isVowel(word[right]); right--) {
        left = right + 1;
    }
    for (int i = left; i < word.size(); i++) {
        if (isVowel(word[i])) {
            return std::string(1, tolower(word[i]));
        }
    }
    return "";
}

bool isVowel(char c) {
    c = std::tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}