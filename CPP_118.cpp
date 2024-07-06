#include <string>
#include <cctype>

std::string get_closest_vowel(const std::string& word) {
    int n = word.size();
    for (int i = n - 1; i >= 0 && !isvowel(word[i]); i--) {
        if (i > 0 && !isvowel(word[i-1])) {
            return string(1, word[i]);
        }
    }
    return "";
}

bool isvowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main() {
    assert(get_closest_vowel("Above") == "o");
    return 0;
}