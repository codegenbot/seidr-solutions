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
    // Test cases
    vector<string> a = words_string("hello world");
    vector<string> b = words_string("hello,world");
    assert(issame(a, b) == true);

    vector<string> c = words_string("code contest");
    vector<string> d = words_string("code,contest");
    assert(issame(c, d) == true);

    vector<string> e = words_string("hello world");
    vector<string> f = words_string("hello,world,test");
    assert(issame(e, f) == false);

    vector<string> g = words_string("hello world");
    vector<string> h = words_string("hello");
    assert(issame(g, h) == false);

    return 0;
}