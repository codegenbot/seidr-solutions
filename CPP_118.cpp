#include <iostream>
#include <string>
#include <cctype>
#include <cassert>

std::string get_closest_vowel(const std::string& word) {
    int n = word.length();
    for (int i = n - 2; i > 0; --i) {
        if (isalpha(word[i]) && !isalpha(word[i - 1]) && !isalpha(word[i + 1])) {
            char c = tolower(word[i]);
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                return std::string(1, word[i]);
            }
        }
    }
    return "";
}

int main() {
    assert(get_closest_vowel("Above") == "o");
    // Add additional test cases as needed
    
    return 0;
}