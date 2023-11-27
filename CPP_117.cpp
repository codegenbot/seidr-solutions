#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool is_vowel(char c) {
    // Implementation of is_vowel() function
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

vector<string> select_words(string s, int n) {
    vector<string> result;
    int count = 0;
    string word = "";
    
    for (int i = 0; i <= s.length(); i++) {
        if (i == s.length() || s[i] == ' ') {
            if (count == n) {
                result.push_back(word);
            }
            count = 0;
            word = "";
        } else {
            if (isalpha(s[i]) && !is_vowel(s[i])) {
                count++;
            }
            word += s[i];
        }
    }
    
    return result;
}

bool issame(vector<string> a, vector<string> b) {
    // Implementation of issame() function
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
    assert(issame(select_words("a b c d e f", 1), { "b", "c", "d", "f" }));
    // More test cases...
    
    return 0;
}