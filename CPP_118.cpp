```cpp
#include <iostream>
#include <string>
#include <cctype>

bool isvowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

std::string get_closest_vowel(std::string word) {
    int left = 0;
    for (int right = word.size() - 1; right > 0; --right) {
        if (!isvowel(word[right])) {
            break;
        }
        left = right;
    }
    
    while (left > 0 && !isvowel(word[left - 1]))
        --left;

    return left > 0 ? std::string(1, word[left - 1]) : "";
}

int main() {
    std::cout << get_closest_vowel("Hello") << std::endl;
    return 0;
}