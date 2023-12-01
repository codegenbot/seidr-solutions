#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> split_words(string txt){
    vector<string> result;
    string word = "";
    
    for(int i = 0; i < txt.length(); i++){
        if(txt[i] == ' '){
            if(word != ""){
                result.push_back(word);
                word = "";
            }
        }
        else if(txt[i] == ','){
            if(word != ""){
                result.push_back(word);
                word = "";
            }
        }
        else{
            word += txt[i];
        }
    }
    
    if(word != ""){
        result.push_back(word);
    }
    
    if(result.empty()){
        result.push_back("3");
    }
    
    return result;
}

bool is_same(vector<string> a, vector<string> b){
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
    assert(is_same(split_words(""), {"0"}));
    assert(is_same(split_words("Hello World"), {"Hello", "World"}));
    assert(is_same(split_words("Stack,Overflow"), {"Stack", "Overflow"}));
    
    return 0;
}