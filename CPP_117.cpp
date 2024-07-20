#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word;
    bool consonantCount = false;
    
    for (char c : s) {
        if (c == ' ') {
            if (consonantCount) {
                result.push_back(word);
                consonantCount = false;
            }
            word.clear();
        } else if (!isVowel(c)) {
            if (!consonantCount) {
                consonantCount = true;
            }
            word += c;
        }
    }
    
    if (consonantCount) {
        result.push_back(word);
    }
    
    return result;
}

bool isVowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}