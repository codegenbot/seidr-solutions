#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> split_words(string txt){
    vector<string> words;
    string word = "";

    for(int i = 0; i < txt.length(); i++){
        if(txt[i] == ' ' || txt[i] == ','){
            if(word != ""){
                words.push_back(word);
                word = "";
            }
        }
        else{
            word += txt[i];
        }
    }

    if(word != ""){
        words.push_back(word);
    }

    if(words.empty()){
        words.push_back(to_string(26));
    }

    return words;
}

bool issame(vector<string> a, vector<string> b){
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

int main(){
    assert(issame(split_words(""), {"0"}));
    // more test cases

    return 0;
}