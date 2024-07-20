```cpp
#include <string>
#include <cctype>

std::string get_closest_vowel(std::string word) {
    int closest = -1;
    for(int i = 0; i < word.length(); i++) {
        if(isalpha(word[i]) && isvowel(word[i])) {
            if(closest == -1 || abs(i - closest) > abs(i - (closest = i))) {
                closest = i;
            }
        }
    }
    return closest != -1 ? string(1, tolower(word[closest])) : "";
}

int main() {
    assert(get_closest_vowel("Above") == "o");
}