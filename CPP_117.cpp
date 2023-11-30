#include <vector>
#include <string>
#include <cctype>
#include <cassert>

bool issame(vector<string> a, vector<string> b) {
    // function implementation here
}

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            int count = 0;
            for (int j = 0; j < word.length(); j++) {
                if (isalpha(word[j]) && !isvowel(word[j])) {
                    count++;
                }
            }
            if (count == n) {
                result.push_back(word);
            }
            word = "";
        } else {
            word += s[i];
        }
    }
    int count = 0;
    for (int j = 0; j < word.length(); j++) {
        if (isalpha(word[j]) && !isvowel(word[j])) {
            count++;
        }
    }
    if (count == n) {
        result.push_back(word);
    }
    return result;
}

int main() {
    assert(issame(select_words("a b c d e f", 1), {"b", "c", "d", "f"}));

    return 0;
}