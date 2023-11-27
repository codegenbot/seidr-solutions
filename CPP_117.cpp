#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

int count_consonants(string word) {
    int count = 0;
    string vowels = "AEIOUaeiou";
    for (int i = 0; i < word.length(); i++) {
        if (vowels.find(word[i]) == string::npos && word[i] != ' ') {
            count++;
        }
    }
    return count;
}

vector<string> select_words(string s, int n) {
    vector<string> words;
    string word = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            if (count_consonants(word) == n) {
                words.push_back(word);
            }
            word = "";
        } else {
            word += s[i];
        }
    }
    if (count_consonants(word) == n) {
        words.push_back(word);
    }
    return words;
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
    assert(issame(select_words("hello world", 2), {}));    
    assert(issame(select_words("programming in c++", 3), {"programming"}));

    return 0;
}