```cpp
#include <iostream>
#include <string>
#include <cctype>

std::string get_closest_vowel(std::string word) {
    int i = word.size() - 1;
    while (i > 0 && !isVowel(word[i])) {
        i--;
    }
    if (i == 0 || !isVowel(word[i]))
        return "";
    for (int j = i - 1; j >= 0 && !isVowel(word[j]); j--) {
        if (isConsonant(word[j]))
            continue;
        return word.substr(j, 1);
    }
    return "";
}

bool isVowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

bool isConsonant(char c) {
    c = tolower(c);
    return !isVowel(c) && (c >= 'b' && c <= 'z');
}

int main() {
    std::string word;
    std::cout << "Enter a string: ";
    std::getline(std::cin, word);
    std::cout << "The closest vowel to the end is: " << get_closest_vowel(word) << std::endl;
    return 0;
}