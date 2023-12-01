#include <iostream>
#include <vector>
using namespace std;

bool isVowel(char c) {
    // Implement the logic to check if a character is a vowel
    // Return true if it is a vowel, false otherwise
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    int count = 0;
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ') {
            word += s[i];
            if (isalpha(s[i]) && !isVowel(s[i])) {
                count++;
            }
        } else {
            if (count == n) {
                result.push_back(word);
            }
            word = "";
            count = 0;
        }
    }
    
    if (count == n) {
        result.push_back(word);
    }
    
    return result;
}

bool issame(vector<string> a, vector<string> b) {
    // Implement the logic to compare if two vectors of strings are the same
    // Return true if they are the same, false otherwise
    if (a.size() != b.size()) {
        return false;
    }
    
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    assert(issame(select_words("a b c d e f", 1), {"b", "c", "d", "f"}));
    // Add more test cases to validate the solution

    return 0;
}