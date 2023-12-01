#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word;
    
    // Iterate through each character in the string
    for (char c : s) {
        // Check if the character is a letter or a space
        if (isalpha(c) || c == ' ') {
            // If the character is a space and we have a word, check its consonant count
            if (c == ' ' && !word.empty()) {
                int consonants = 0;
                for (char ch : word) {
                    // If the character is a consonant, increment the counter
                    if (isalpha(ch) && !is_vowel(ch)) {
                        consonants++;
                    }
                }
                // If the word has exactly n consonants, add it to the result
                if (consonants == n) {
                    result.push_back(word);
                }
                word = "";
            } else {
                word += c;
            }
        }
    }
    // Check if the last word has exactly n consonants
    if (!word.empty()) {
        int consonants = 0;
        for (char c : word) {
            if (isalpha(c) && !is_vowel(c)) {
                consonants++;
            }
        }
        if (consonants == n) {
            result.push_back(word);
        }
    }
    
    return result;
}

bool is_vowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}