```cpp
#include <string>
#include <cctype>

std::string get_closest_vowel(std::string word) {
    int closest = -1;
    for (int i = word.size() - 1; i >= 0; --i) {
        if (isVowel(word[i])) {
            if (closest == -1)
                closest = i;
            break;
        }
    }
    return (word.empty() || closest == -1) ? "" : word.substr(closest, 1);
}

bool isVowel(char c) {
    c = std::tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
    assert(get_closest_vowel("Above") == "o");
    return 0;
}