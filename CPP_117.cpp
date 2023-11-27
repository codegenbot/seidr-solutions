#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

bool isvowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

vector<string> select_words(string s, int n) {
    vector<string> result;
    if (s.empty()) {
        return result;
    }
    string word;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ' || i == s.length() - 1) {
            if (i == s.length() - 1) {
                word += s[i];
            }
            int consonantCount = 0;
            for (int j = 0; j < word.length(); j++) {
                if (isalpha(word[j]) && !isvowel(word[j])) {
                    consonantCount++;
                }
            }
            if (consonantCount == n) {
                result.push_back(word);
            }
            word = "";
        } else {
            word += s[i];
        }
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
    assert(issame(select_words("", 2), {}));
    assert(issame(select_words("hello world", 3), {"world"}));
    assert(issame(select_words("cpp contest problem", 2), {"problem"}));
    assert(issame(select_words("this is a test", 1), {"this", "is", "a"}));
    return 0;
}