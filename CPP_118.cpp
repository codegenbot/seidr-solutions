#include <string>
#include <cctype>

std::string get_closest_vowel(std::string word) {
    for (int i = word.size() - 1; i >= 0; --i) {
        if (isVowel(word[i])) {
            for (int j = i - 1; j >= 0; --j) {
                if (!isVowel(word[j])) {
                    return std::string(1, word[i]);
                }
            }
            return std::string(1, word[i]);
        }
    }
    return "";
}

bool isVowel(char c) {
    c = std::tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
    assert(get_closest_vowel("Above") == "o");
    return 0;
}