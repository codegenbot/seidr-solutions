```
#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool isvowel(char c) {
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};
    for (int i = 0; i < 5; i++) {
        if (c == vowels[i]) {
            return true;
        }
    }
    return false;
}

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<string> select_words(string s, int n) {
    vector<string> words;
    string word = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            if (word.length() > 0) {
                int consonantCount = 0;
                for (int j = 0; j < word.length(); j++) {
                    if (isalpha(word[j]) && !isvowel(word[j])) {
                        consonantCount++;
                    }
                }
                if (consonantCount == n) {
                    words.push_back(word);
                }
                word = "";
            }
        } else {
            word += s[i];
        }
    }
    if (word.length() > 0) {
        int consonantCount = 0;
        for (int j = 0; j < word.length(); j++) {
            if (isalpha(word[j]) && !isvowel(word[j])) {
                consonantCount++;
            }
        }
        if (consonantCount == n) {
            words.push_back(word);
        }
    }
    return words;
}

int main() {
    assert(issame(select_words("a b c d e f", 1), vector<string>{"b", "c", "d", "f"}));
    return 0;
}
```