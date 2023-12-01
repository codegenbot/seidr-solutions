#include <vector>
#include <string>
#include <cassert>

bool issame(vector<string> a, vector<string> b);

vector<string> words_string(string s){
    vector<string> words;
    string word = "";
    for(int i=0; i<s.length(); i++){
        if(s[i] == ' ' || s[i] == ','){
            if(word != ""){
                words.push_back(word);
                word = "";
            }
        }
        else{
            word += s[i];
        }
    }
    if(word != ""){
        words.push_back(word);
    }
    return words;
}

bool issame(vector<string> a, vector<string> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

int main() {
    vector<string> a = words_string("Hello, World!");
    vector<string> b = words_string("Hello World!");
    assert(issame(a, b) == true);

    vector<string> c = words_string("Hello, World!");
    vector<string> d = words_string("Hello, World");
    assert(issame(c, d) == false);

    vector<string> e = words_string("Hello, World!");
    vector<string> f = words_string("Hello, world!");
    assert(issame(e, f) == false);

    return 0;
}