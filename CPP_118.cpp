#include <string>
#include <cctype>

std::string get_closest_vowel(std::string word) {
    std::string closest = "";
    for (int i = word.size() - 1; i >= 0; --i) {
        if (isVowel(word[i])) {
            if (!closest.empty()) {
                return word[i] < closest[0]? std::string(1, word[i]) : closest;
            } else {
                return word[i];
            }
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
    // your logic here
}