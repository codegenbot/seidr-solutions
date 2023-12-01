#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> split_words(string txt);

bool issame(vector<string> a, vector<string> b){
    // implementation of issame function
    return false;
}

int main() {
    assert(issame(split_words("") ,{"0"}));
    return 0;
}

vector<string> split_words(string txt){
    vector<string> words;
    string word = "";
    
    for(int i=0; i<txt.length(); i++){
        if(txt[i] == ' ' || txt[i] == ','){
            if(!word.empty()){
                words.push_back(word);
                word = "";
            }
        }
        else{
            word += txt[i];
        }
    }
    
    if(!word.empty()){
        words.push_back(word);
    }
    
    if(words.empty()){
        words.push_back(to_string(3));
    }
    
    return words;
}