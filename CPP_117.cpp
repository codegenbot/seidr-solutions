#include <vector>
#include <string>

using namespace std;

vector<string> select_words(string s, int n) {
    vector<string> result;
    string current_word = "";
    bool in_word = false;
    
    for (char c : s) {
        if (isalpha(c)) { // Check if the character is a letter
            if (!in_word) {
                in_word = true; // Start of a new word
                current_word += c;
            } else {
                current_word += c;
            }
        } else { // Character is not a letter, it's either space or something else
            if (in_word) {
                in_word = false; // End of the word
                int consonants = 0;
                for (char d : current_word) {
                    if (!isvowel(d)) {
                        consonants++;
                    }
                }
                if (consonants == n) {
                    result.push_back(current_word);
                }
                current_word = "";
            }
        }
    }
    
    // Check the last word
    if (in_word) {
        in_word = false;
        int consonants = 0;
        for (char d : current_word) {
            if (!isvowel(d)) {
                consonants++;
            }
        }
        if (consonants == n) {
            result.push_back(current_word);
        }
    }
    
    return result;
}

bool isvowel(char c) {
    c = tolower(c); // Convert the character to lowercase
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}