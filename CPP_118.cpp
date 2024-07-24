#include <string>
#include <cctype>

std::string get_closest_vowel(std::string word) {
    std::string result = "";
    for (int i = 0; i < word.size(); ++i) {
        if (isVowel(word[i])) {
            if (!result.empty()) {
                return result;
            }
            for (int j = i + 1; j < word.size(); ++j) {
                if (!isVowel(word[j])) {
                    result = std::string(1, word[i]);
                    return result;
                }
            }
        }
    }
    return result;
}

bool isVowel(char c) {
    c = std::tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
    assert(get_closest_vowel("Above") == "o");
    return 0;
}