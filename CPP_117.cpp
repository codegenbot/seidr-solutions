#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool issame(vector<string> a, vector<string> b) {
    // actual implementation of issame function
}

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    int consonants = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            if (consonants == n) {
                result.push_back(word);
            }
            word = "";
            consonants = 0;
        } else {
            if (isalpha(s[i])) {
                if (tolower(s[i]) != 'a' && tolower(s[i]) != 'e' && tolower(s[i]) != 'i' && tolower(s[i]) != 'o' && tolower(s[i]) != 'u') {
                    consonants++;
                }
            }
            word += s[i];
        }
    }

    if (consonants == n) {
        result.push_back(word);
    }

    return result;
}

int main() {
    // test case
    assert(issame(select_words("a b c d e f", 1), {"b", "c", "d", "f"}));
    // additional test cases
    
    return 0;
}