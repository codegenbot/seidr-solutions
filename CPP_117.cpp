```cpp
#include <algorithm>
#include <cassert>
#include <string>
#include <vector>

using namespace std;

bool isvowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
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

int main() {
    assert(issame(select_words("a b c d e f", 1), vector<string>{"b", "c", "d", "f"}));

    return 0;
}
```