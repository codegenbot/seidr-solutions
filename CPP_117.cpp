#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> select_words(string s, int n);

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

int main() {
    assert(issame(select_words("a b c d e f", 1), {"b", "c", "d", "f"}));
    return 0;
}

vector<string> select_words(string s, int n) {
    vector<string> words;
    string word = "";
    int count = 0;
    
    for (char c : s) {
        if (c == ' ') {
            if (count == n) {
                words.push_back(word);
            }
            word = "";
            count = 0;
        } else if (isalpha(c)) {
            if (tolower(c) != 'a' && tolower(c) != 'e' && tolower(c) != 'i' && tolower(c) != 'o' && tolower(c) != 'u') {
                count++;
            }
            word += c;
        }
    }
    
    if (count == n) {
        words.push_back(word);
    }
    
    return words;
}