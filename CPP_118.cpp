#include <string>
#include <cctype>

bool isvowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

std::string get_closest_vowel(std::string word) {
    int left = 0, right = word.size() - 1;
    while (left < right) {
        if (!isvowel(word[left])) {
            ++left;
        } else if (!isvowel(word[right])) {
            --right;
        } else {
            return isVowelCloserToTheStart(word, left, right) ? word.substr(0, left) : word.substr(right + 1);
        }
    }
    return isVowelInWord(word) ? std::to_string(word[0]) : " ";
}

bool isVowelInWord(std::string word) {
    for (char c : word) {
        if (isvowel(c)) {
            return true;
        }
    }
    return false;
}

bool isVowelCloserToTheStart(std::string word, int left, int right) {
    for (int i = 0; i <= right - left; i++) {
        if (isvowel(word[left + i])) {
            return true;
        }
    }
    return false;
}