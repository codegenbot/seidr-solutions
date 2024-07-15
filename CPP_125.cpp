#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> split_words(string s) {
    vector<string> words;
    string word = "";
    
    for (char c : s) {
        if (isalnum(c)) {
            word += c;
        } else if (!word.empty()) {
            words.push_back(word);
            word = "";
        }
    }
    
    if (!word.empty()) {
        words.push_back(word);
    }
    
    return words;
}

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    assert(issame(split_words("Hello"), vector<string>{"Hello"}));
    assert(issame(split_words("Hello, World!"), vector<string>{"Hello", "World"}));
    assert(issame(split_words("Hello! How are you?"), vector<string>{"Hello", "How", "are", "you"}));
    assert(issame(split_words("a b c d e f g h i j k l m n o p q r s t u v w x y z"), vector<string>{"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"}));
    
    return 0;
}