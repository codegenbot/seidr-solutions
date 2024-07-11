#include <string>

string get_closest_vowel(string word) {
    string vowels = "AEIOUaeiou";
    for (int i = word.size() - 1; i >= 0; --i) {
        if (i > 0 && i < word.size() - 1 && vowels.find(word[i]) != string::npos && !isalpha(word[i - 1]) && !isalpha(word[i + 1])) {
            return string(1, word[i]);
        }
    }
    return "";
}

int main() {
    assert(get_closest_vowel("Above") == "o");
    return 0;
}