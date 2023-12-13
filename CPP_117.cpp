```cpp
#include <iostream>
#include <vector>
#include <string>
#include <cassert>

bool is_consonant(char c) {
    c = tolower(c);
    if (c >= 'a' && c <= 'z') {
        return !(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    }
    return false;
}

bool issame(const vector<string>& a, const vector<string>& b) {
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

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    int consonants = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ') {
            word += s[i];
            if (is_consonant(s[i])) {
                consonants++;
            }
        } else {
            if (consonants == n) {
                result.push_back(word);
            }
            word = "";
            consonants = 0;
        }
    }
    if (consonants == n) {
        result.push_back(word);
    }
    return result;
}

int main() {
    assert(select_words("a b c d e f", 1) == vector<string>{"b", "c", "d", "f"});

    // Print the result
    vector<string> result = select_words("a b c d e f", 1);
    for (string word : result) {
        cout << word << " ";
    }
    cout << endl;

    return 0;
}
```