#include <iostream>
#include <vector>
#include <cassert>
#include <cctype>

using namespace std;

bool isConsonant(char c) {
    c = tolower(c);
    return !(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

bool isSame(vector<string> a, vector<string> b) {
    // Add your implementation here if needed
}

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    int consonantCount = 0;
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ') {
            word += s[i];
            if (isConsonant(s[i])) {
                consonantCount++;
            }
        } else {
            if (consonantCount == n) {
                result.push_back(word);
            }
            word = "";
            consonantCount = 0;
        }
    }
    
    if (consonantCount == n) {
        result.push_back(word);
    }
    
    return result;
}

int main() {
    assert(isSame(select_words("a b c d e f", 1) , {"b", "c", "d", "f"}));
    
    return 0;
}