#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

bool isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
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