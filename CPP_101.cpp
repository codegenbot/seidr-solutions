#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

vector<string> words_string(string s);

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    assert(words_string("ahmed     , gamal") == vector<string>{"ahmed", "gamal"});
    return 0;
}

vector<string> words_string(string s) {
    vector<string> words;
    string word = "";
    for(int i=0; i<s.length(); i++) {
        if(s[i] == ' ' || s[i] == ',') {
            if(word != "") {
                words.push_back(word);
                word = "";
            }
        } else {
            word += s[i];
        }
    }
    if(word != "") {
        words.push_back(word);
    }
    return words;
}