```cpp
#include <iostream>
#include <string>
#include <cctype>

string get_closest_vowel(string word) {
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
    string word;
    std::cout << "Enter a word: ";
    std::getline(std::cin, word);
    cout << get_closest_vowel(word) << endl;
    return 0;
}