#include <iostream>
#include <string>
#include <cassert>

std::string get_closest_vowel(const std::string& word) {
    for (int i = word.length() - 2; i >= 0; i--) {
        if (word[i] != 'a' && word[i] != 'e' && word[i] != 'i' && word[i] != 'o' && word[i] != 'u' &&
            word[i - 1] != 'a' && word[i - 1] != 'e' && word[i - 1] != 'i' && word[i - 1] != 'o' && word[i - 1] != 'u' &&
            word[i - 2] != 'a' && word[i - 2] != 'e' && word[i - 2] != 'i' && word[i - 2] != 'o' && word[i - 2] != 'u') {
            if (word[i] == 'y') {
                return word.substr(i - 1, 1);
            } else {
                return word.substr(i, 1);
            }
        }
    }
    return "";
}

int main() {
    assert(get_closest_vowel("Above") == "o");
    return 0;
}