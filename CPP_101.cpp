vector<string> words_string(string s);
bool issame(vector<string> a, vector<string> b);
#include <cassert>

vector<string> words_string(string s){
    vector<string> words;
    string word;
    for(int i=0; i<s.length(); i++){
        if(s[i] == ',' || s[i] == ' '){
            if(!word.empty()){
                words.push_back(word);
                word = "";
            }
        }
        else{
            word += s[i];
        }
    }
    if(!word.empty()){
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
    vector<string> a = words_string("hello,world");
    vector<string> b = words_string("hello world");
    assert(issame(a, b) == true);
    
    vector<string> c = words_string("hello,world");
    vector<string> d = words_string("hello, world");
    assert(issame(c, d) == false);
    
    vector<string> e = words_string("hello,world");
    vector<string> f = words_string("hello,world,");
    assert(issame(e, f) == false);
    
    vector<string> g = words_string("");
    vector<string> h = words_string("");
    assert(issame(g, h) == true);
    
    return 0;
}