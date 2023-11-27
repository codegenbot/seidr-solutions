#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

bool issame(vector<string> a, vector<string> b){
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

vector<string> words_string(string s){
    vector<string> words;
    string word = "";
    for (int i = 0; i < s.length(); i++){
        if (s[i] == ' ' || s[i] == ','){
            if (word != ""){
                words.push_back(word);
                word = "";
            }
        } else {
            word += s[i];
        }
    }
    if (word != ""){
        words.push_back(word);
    }
    return words;
}

int main(){
    assert(issame(words_string("ahmed     , gamal"), {"ahmed", "gamal"}));
    assert(issame(words_string("hello,world"), {"hello", "world"}));
    assert(issame(words_string(""), {}));
    assert(issame(words_string("only one"), {"only", "one"}));
    cout << "All test cases passed!" << endl;
    return 0;
}