#include <iostream>
#include <string>

std::string get_closest_vowel(std::string word) {
    std::string result = "";
    for (int i = word.length() - 1; i > 0; --i) {
        if (isVowel(word[i])) {
            int left = i - 1;
            while (left >= 0 && !isVowel(word[left])) --left;
            if (left < i - 1) {
                result = word.substr(left + 1, i - left - 1);
                break;
            }
        }
    }
    return result;
}

bool isVowel(char c) {
    using namespace std;
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}