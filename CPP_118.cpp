```cpp
#include <iostream>
#include <string>
#include <algorithm>

bool isvowl(char c) {
    string vowels = "aeiouAEIOU";
    return (std::find(std::begin(vowels), std::end(vowels), tolower(c)) != std::end(vowels));
}

std::string get_closest_vowel(std::string word) {
    int closest = -1;
    for (int i = 0; i < word.size(); ++i) {
        if (isvowl(word[i])) {
            if (closest == -1)
                closest = i;
            else
                return string(1, word[closest]);
        }
    }
    return closest == -1 ? "" : std::string(1, word[closest]);
}

int main() {
    std::cout << get_closest_vowel("Apple") << std::endl;
    return 0;
}