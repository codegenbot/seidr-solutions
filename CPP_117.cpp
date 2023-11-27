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
    vector<string> expected = {"b", "c", "d", "f"};
    assert(issame(select_words("a b c d e f", 1), expected));

    // additional test cases
    assert(issame(select_words("", 1), {}));
    assert(issame(select_words("a b c d e f", 2), {}));
    assert(issame(select_words("apple banana cherry", 3), {"cherry"}));
    assert(issame(select_words("programming is fun", 1), {"programming"}));
    assert(issame(select_words("hello world", 4), {"world"}));
    
    cout << "All test cases passed!" << endl;
    return 0;
}