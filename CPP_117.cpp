#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

bool is_same(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> select_words(string s, int n);

int main() {
    assert(is_same(select_words("a b c d e f", 1), {"b", "c", "d", "f"}));
    return 0;
}

vector<string> select_words(string s, int n) {
    vector<string> result;
    if (s.empty()) {
        return result;
    }
    
    string word = "";
    int consonant_count = 0;
    
    for (char c : s) {
        if (c == ' ') {
            if (consonant_count == n) {
                result.push_back(word);
            }
            word = "";
            consonant_count = 0;
        } else if (isalpha(c) && !isspace(c)) {
            if (tolower(c) != 'a' && tolower(c) != 'e' && tolower(c) != 'i' && tolower(c) != 'o' && tolower(c) != 'u') {
                consonant_count++;
            }
            word += c;
        }
    }
    
    if (consonant_count == n) {
        result.push_back(word);
    }
    
    return result;
}