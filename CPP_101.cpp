#include <iostream>
#include <vector>
using namespace std;

vector<string> words_string(string s){
    vector<string> words;
    string word;
    for(int i = 0; i < s.length(); i++){
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

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

int main(){
    assert(issame(words_string("ahmed     , gamal"), {"ahmed", "gamal"}));
    return 0;
}