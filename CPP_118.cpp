```cpp
#include <string>
#include <cctype>

std::string get_closest_vowel(std::string word) {
    int left = 0;
    for (int i = word.size() - 1; i >= 0; i--) {
        if (!isvowel(word[i])) {
            left = i + 1;
            break;
        }
    }
    for (int i = left; i < word.size(); i++) {
        if (isvowel(word[i])) {
            return std::string(1, tolower(word[i]));
        }
    }
    return "";
}

bool isvowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}