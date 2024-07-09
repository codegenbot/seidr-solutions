```cpp
#include <string>
#include <cctype>

bool isvowel(char c) {
    return std::tolower(c) == 'a' || std::tolower(c) == 'e' ||
           std::tolower(c) == 'i' || std::tolower(c) == 'o' ||
           std::tolower(c) == 'u';
}

std::string get_closest_vowel(std::string word) {
    int n = word.size();
    for (int i = 0; i < n; ++i) {
        if (!isalpha(word[i])) continue;
        if (ispunct(word[i]) || isdigit(word[i])) continue;
        if (word[i] == 'Y' && i > 1 && isupper(word[i-1]) && islower(word[i-2]))
            return "Y";
        if (ispunct(word[i]) || isdigit(word[i])) break;
        if (isvowel(word[i])) return isvowel(word[i]) ? word.substr(i) : "";
    }
    return "";
}

int main() {
    assert(get_closest_vowel("Above") == "o");
    return 0;
}