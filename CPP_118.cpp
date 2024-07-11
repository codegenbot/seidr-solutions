#include <iostream>
#include <cctype>
#include <string>

std::string get_closest_vowel(std::string word) {
    for (int i = word.size() - 1; i >= 0; --i) {
        if (!isalpha(word[i])) continue;
        char c = tolower(word[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            return std::to_string(c);
        while (!isalpha(word[i-1]) && i > 0) --i;
        c = tolower(word[i-1]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            return std::to_string(c);
    }
    return "";
}