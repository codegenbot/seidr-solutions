```cpp
#include <string>
#include <cctype>

std::string get_closest_vowel(std::string word) {
    int n = word.size();
    for (int i = n - 1; i > 0; --i) {
        if (!isalpha(word[i])) continue;
        if (isvowel(word[i])) return std::string(1, tolower(word[i]));
        while (i > 0 && !isalpha(word[i]) && i < n - 1) --i;
    }
    return "";
}

int main() {
    assert(get_closest_vowel("Above") == "o");
    return 0;
}