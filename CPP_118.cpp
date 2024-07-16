#include <string>
#include <cassert>

std::string get_closest_vowel(const std::string& word) {
    std::string vowels = "AEIOUaeiou";
    int n = word.length();
    for (int i = n - 2; i > 0; --i) {
        if (vowels.find(word[i]) != std::string::npos) {
            if (!isalpha(word[i - 1]) || !isalpha(word[i + 1])) {
                continue;
            }
            return std::string(1, word[i]);
        }
    }
    return "";
}

int main() {
    assert(get_closest_vowel("Above") == "o");
}