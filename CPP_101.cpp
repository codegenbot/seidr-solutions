#include <vector>
#include <cassert>
#include <string>

vector<string> words_string(string s) {
    vector<string> words;
    string word;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == ' ' || s[i] == ','){
            if(!word.empty()){
                words.push_back(word);
                word.clear();
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

bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size()){
        return false;
    }
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

int main() {
    vector<string> words = words_string("ahmed     , gamal");
    assert(issame(words, {"ahmed", "gamal"}));
    return 0;
}