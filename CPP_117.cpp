#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <cassert>

using namespace std;

vector<string> select_words(const string& s, int n);

bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

vector<string> select_words(const string& s, int n) {
    vector<string> result;
    string word = "";
    int consonant_count = 0;

    for (char c : s) {
        if (c == ' ') {
            if (consonant_count == n) {
                result.push_back(word);
            }
            word = "";
            consonant_count = 0;
        } else if (isalpha(c)) {
            if (tolower(c) != 'a' && tolower(c) != 'e' && tolower(c) != 'i' && tolower(c) != 'o' && tolower(c) != 'u') {
                consonant_count++;
            }
            word += c;
        }
    }

    if (!word.empty() && consonant_count == n) {
        result.push_back(word);
    }

    return result;
}

int main() {
    assert(issame(select_words("a b c d e f", 1), {"b", "c", "d", "f"}));
    
    return 0;
}