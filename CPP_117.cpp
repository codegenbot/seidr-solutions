#include <vector>
#include <string>
#include <algorithm>

vector<string> select_words(string s, int n) {
    if (s.empty()) {
        return {};
    }
    
    vector<string> words;
    string word;
    for (char c : s) {
        if (isalpha(c)) {
          // Count the number of consonants in the word
            if (tolower(c) != 'a' && tolower(c) != 'e' && tolower(c) != 'i' && tolower(c) != 'o' && tolower(c) != 'u') {
                word += c;
            }
        } else if (!word.empty()) {
          // Add the word to the vector if it has the desired number of consonants
            if (count(word.begin(), word.end(), 'a') + count(word.begin(), word.end(), 'e')
                + count(word.begin(), word.end(), 'i') + count(word.begin(), word.end(), 'o')
                + count(word.begin(), word.end(), 'u') != n) {
                words.push_back(word);
            }
            
            word = "";
        }
    }
    
    // Check if the last word in the string has the desired number of consonants
    if (!word.empty() && (count(word.begin(), word.end(), 'a') + count(word.begin(), word.end(), 'e')
                         + count(word.begin(), word.end(), 'i') + count(word.begin(), word.end(), 'o')
                         + count(word.begin(), word.end(), 'u') != n)) {
        words.push_back(word);
    }
    
    return words;
}