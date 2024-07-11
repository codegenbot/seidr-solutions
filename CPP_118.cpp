```cpp
#include <string>
#include <cctype>

std::string get_closest_vowel(std::string word) {
    for (int i = word.size() - 1; i > 0; --i) {
        if (!isalpha(word[i])) continue;
        if (isvowel(tolower(word[i]))) return std::string(1, tolower(word[i]));
        while (!isalpha(word[i-1]) && i > 0) --i;
        if (isvowel(tolower(word[i-1]))) return std::string(1, tolower(word[i-1]));
    }
    return "";
}

bool isvowel(char c) {
    char low = tolower(c);
    return (low == 'a' || low == 'e' || low == 'i' || low == 'o' || low == 'u');
}