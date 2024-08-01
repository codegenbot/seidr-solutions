#include <iostream>
#include <string>
#include <cctype>

bool isvowel(char c) {
    return std::tolower(c) == 'a' || std::tolower(c) == 'e' || std::tolower(c) == 'i' ||
           std::tolower(c) == 'o' || std::tolower(c) == 'u';
}

std::string get_closest_vowel(std::string word) {
    int left = 0, right = word.size() - 1;
    while (left <= right) {
        if (!isvowel(word[left])) left++;
        else if (!isvowel(word[right])) right--;
        else return word.substr(left + 1, right - left);
    }
    return "";
}

int main() {
    assert(get_closest_vowel("Above") == "o");
    return 0;
}