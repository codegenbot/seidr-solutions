#include <iostream>
#include <string>
#include <cctype>

std::string get_closest_vowel(std::string word);
bool isvowel(char c);
bool isconsonant(char c);

std::string get_closest_vowel(string word) {
    int n = word.size();
    for (int i = 0; i < n; ++i) {
        if (isvowel(word[i])) {
            int j;
            for (j = i - 1; j >= 0 && !isconsonant(word[j]); --j)
                ;
            if (j >= 0) {
                return word.substr(0, i);
            }
            else {
                return word.substr(i, 1);
            }
        }
    }
    return "";
}

bool isvowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

bool isconsonant(char c) {
    c = tolower(c);
    return !isvowel(c) && (c >= 'b' && c <= 'z');
}

int main() {
    // Use the functions as needed...
    assert (get_closest_vowel("Above") == "o");
    return 0;
}