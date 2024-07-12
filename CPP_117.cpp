#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

bool is_same(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> select_words(string s, int n) {
    vector<string> result;
    if (s.empty()) {
        return result;
    }
    
    s += ' '; // Ensure string ends with a space for proper word extraction
    
    string word = "";
    int consonant_count = 0;
    
    for (char c : s) {
        if (c == ' ') {
            if (!word.empty() && consonant_count == n) {
                result.push_back(word);
            }
            word = "";
            consonant_count = 0;
        } else if (isalpha(c)) {
            if (tolower(c) != 'a' && tolower(c) != 'e' && tolower(c) != 'i' && tolower(c) != 'o' && tolower(c) != 'u') {
                consonant_count++;
            }
            word += c;
        }
    }
    
    return result;
}