```cpp
#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

bool is_consonant(char c) {
    // add your implementation for is_consonant function here
    // return true if the character is a consonant, false otherwise
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

bool issame(vector<string> a, vector<string> b) {
    // add your implementation for issame function here
    // return true if vectors a and b are the same, false otherwise
}

int main() {
    assert(issame(select_words("a b c d e f", 1), {"b", "c", "d", "f"}));

    return 0;
}
```