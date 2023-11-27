#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

int count_consonants(string word) {
    int count = 0;
    for (char c : word) {
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U') {
            count++;
        }
    }
    return count;
}

bool areSame(vector<string> a, vector<string> b) {
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
    if (s.empty()) {
        return result;
    }
    string word;
    for (char c : s) {
        if (c == ' ') {
            if (count_consonants(word) == n) {
                result.push_back(word);
            }
            word.clear();
        } else {
            word += c;
        }
    }
    if (count_consonants(word) == n) {
        result.push_back(word);
    }
    return result;
}

int main() {
    assert(areSame(select_words("a b c d e f", 1), {"b", "c", "d", "f"}));
    // Additional test cases
    assert(areSame(select_words("hello world", 2), {}));
    assert(areSame(select_words("this is a sentence", 3), {"sentence"}));
    assert(areSame(select_words("programming is fun", 4), {"programming"}));
    return 0;
}