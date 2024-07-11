#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

vector<string> select_words(string s, int n) {
    vector<string> result;
    if (s.empty()) {
        return result;
    }
    
    string word = "";
    int consonantCount = 0;
    
    for (char c : s) {
        if (c == ' ') {
            if (consonantCount == n) {
                result.push_back(word);
            }
            word = "";
            consonantCount = 0;
        } else if (isalpha(c) && strchr("aeiouAEIOU", c) == NULL) {
            consonantCount++;
        }
        word += c;
    }
    
    if (consonantCount == n) {
        result.push_back(word);
    }
    
    return result;
}

int main() {
    assert (issame(select_words("a b c d e f", 1) , {"b", "c", "d", "f"}));
    
    return 0;
}