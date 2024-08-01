#include <iostream>
#include <string>
#include <cctype>

std::string get_closest_vowel(std::string word) {
    int left = 0, right = word.size() - 1;
    while (left <= right) {
        if (isvowel(word[left])) return word.substr(left);
        left++;
        
        if (isvowel(word[right])) return word.substr(0, right + 1);
        right--;
    }
    return "";
}

bool isvowel(char c) {
    return std::tolower(c) == 'a' || std::tolower(c) == 'e' || std::tolower(c) == 'i' ||
           std::tolower(c) == 'o' || std::tolower(c) == 'u';
}

int main() {
    assert(get_closest_vowel("Above") == "o");
    return 0;
}