#include <string>

std::string get_closest_vowel(std::string word) {
    std::string result = "";
    for (int i = word.length() - 1; i >= 0; i--) {
        if ((word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u') ||
            (word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U')) {
            return std::string(1, tolower(word[i]));
        }
    }
    return result;
}

int main() {
    assert(get_closest_vowel("Above") == "o");
}