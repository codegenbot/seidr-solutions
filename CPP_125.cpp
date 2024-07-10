#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> split_words(string str) {
    vector<string> words;
    string word = "";
    for (char c : str) {
        if (c == ' ') {
            if (!word.empty()) {
                words.push_back(word);
                word = "";
            }
        } else {
            word += c;
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
    assert(split_words("") == vector<string>{"0"});
    assert(split_words("Hello World") == vector<string>{"Hello", "World"});
    assert(split_words("C++ is awesome") == vector<string>{"C++", "is", "awesome"});
    
    vector<string> words1 = {"apple", "banana", "cherry"};
    vector<string> words2 = {"apple", "banana", "cherry"};
    assert(issame(words1, words2) == true);
    
    vector<string> words3 = {"apple", "banana", "orange"};
    assert(issame(words1, words3) == false);

    return 0;
}