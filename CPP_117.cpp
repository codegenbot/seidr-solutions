#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<string> select_words(string s, int n);

bool issame(vector<string> a, vector<string> b) {
    // Compare the two vectors
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
    assert(issame(select_words("apple orange banana", 2), {"apple", "orange", "banana"}));
    assert(issame(select_words("hello world", 0), {}));
    assert(issame(select_words("programming is fun", 3), {"programming", "fun"}));
    cout << "All tests pass" << endl;
    return 0;
}

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    int consonantCount = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            if (consonantCount == n) {
                result.push_back(word);
            }
            word = "";
            consonantCount = 0;
        } else {
            if (isalpha(s[i])) {
                if (tolower(s[i]) != 'a' && tolower(s[i]) != 'e' && tolower(s[i]) != 'i' && tolower(s[i]) != 'o' && tolower(s[i]) != 'u') {
                    consonantCount++;
                }
            }
            word += s[i];
        }
    }

    if (consonantCount == n) {
        result.push_back(word);
    }

    return result;
}