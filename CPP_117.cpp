#include <iostream>
#include <vector>
using namespace std;

vector<string> select_words(string s, int n);
int count_consonants(string word);
bool is_vowel(char c);
bool is_same(vector<string> a, vector<string> b);

int main() {
    assert(is_same(select_words("a b c d e f", 1) , {"b", "c", "d", "f"}));
    return 0;
}

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            if (count_consonants(word) == n) {
                result.push_back(word);
            }
            word = "";
        } else {
            word += s[i];
        }
    }
    if (count_consonants(word) == n) {
        result.push_back(word);
    }
    return result;
}

int count_consonants(string word) {
    int count = 0;
    for (int i = 0; i < word.length(); i++) {
        if (!is_vowel(word[i])) {
            count++;
        }
    }
    return count;
}

bool is_vowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

bool is_same(vector<string> a, vector<string> b) {
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