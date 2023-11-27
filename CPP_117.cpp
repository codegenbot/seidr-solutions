#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

int count_consonants(string word) {
    int count = 0;
    for (char c : word) {
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
            count++;
        }
    }
    return count;
}

bool issame(vector<string> a, vector<string> b) {
    return a == b;
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
    assert(issame(select_words("a b c d e f", 1), {"b", "c", "d", "f"}));
    return 0;
}