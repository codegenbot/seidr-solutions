```cpp
#include <iostream>
#include <string>
#include <cctype>

std::string getClosestVowel(std::string word) {
    int left = 0;
    for (int i = word.length() - 1; i >= 0; --i) {
        if (!isVowel(word[i])) {
            left = i + 1;
            break;
        }
    }
    for (int i = left; i < word.length(); ++i) {
        if (isVowel(word[i])) {
            return std::string(1, word[i]);
        }
    }
    return "";
}

bool isVowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}