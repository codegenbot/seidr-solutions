#include <iostream>
#include <vector>
#include <string>
#include <cassert>

bool issame(vector<string> a, vector<string> b){
    if(a.size() != b.size()) {
        return false;
    }
    
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    
    return true;
}

vector<string> select_words(string s, int n){
    vector<string> words;
    string word = "";
    int consonant_count = 0;
    
    for(int i = 0; i <= s.size(); i++){
        if(i == s.size() || s[i] == ' '){
            if(consonant_count == n){
                words.push_back(word);
            }
            word = "";
            consonant_count = 0;
        } else if(isalpha(s[i]) && strchr("bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ", s[i])){
            consonant_count++;
        }
        if(isalpha(s[i])){
            word += s[i];
        }
    }
    
    return words;
}

int main(){
    assert(issame(select_words("a b c d e f", 1) , {"b", "c", "d", "f"}));
    
    return 0;
}