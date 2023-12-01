#include <string>

bool isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

std::string get_closest_vowel(std::string word) {
    std::string vowels = "aeiouAEIOU";
    int n = word.length();
    for (int i = n - 2; i >= 1; i--) {
        if (vowels.find(word[i]) != std::string::npos && !isVowel(word[i - 1]) &&
            !isVowel(word[i + 1])) {
            return std::string(1, word[i]);
        }
    }
    return "";
}

int main() {
    assert(get_closest_vowel("Above") == "o");
    // Add more test cases here

    return 0;
}