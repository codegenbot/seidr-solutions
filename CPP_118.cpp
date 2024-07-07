#include <iostream>
#include <string>
#include <algorithm>

std::string get_closest_vowel(std::string word) {
    int i = word.length() - 1;
    
    while (i >= 0 && !isVowel(word[i])) {
        --i;
    }
    
    if (i < 0) return "";
    
    for (int j = i; j > 0; --j) {
        if (!isVowel(word[j-1]) || word[j-1] == word[i]) break;
        --i;
    }
    
    return word.substr(i, 1);
}

bool isVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
    std::cout << get_closest_vowel("yogurt") << std::endl;
    std::cout << get_closest_vowel("FULL") << std::endl;
    std::cout << get_closest_vowel("quick") << std::endl;
    std::cout << get_closest_vowel("ab") << std::endl;

    return 0;
}