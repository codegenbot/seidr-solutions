#include <iostream>
#include <string>
#include <cassert>

std::string get_closest_vowel(std::string word) {
    std::string vowels = "aeiouAEIOU";
    int idx = -1;
    for (int i = word.size() - 1; i >= 0; --i) {
        if (vowels.find(word[i]) != std::string::npos) {
            idx = i;
            break;
        }
    }
    if (idx == -1) {
        return "";
    }
    for (int j = idx - 1; j >= 0; --j) {
        if (vowels.find(word[j]) == std::string::npos) {
            return std::string(1, word[idx]);
        }
    }
    return "";
}

int main() {
    assert(get_closest_vowel("Above") == "o");
    return 0;
}