#include <iostream>
#include <string>
#include <vector>
#include <cassert>

using namespace std;

vector<string> split_words(string txt){
    vector<string> words;
    string word = "";
    bool hasWhitespace = false;
    bool hasComma = false;
    
    for(int i=0; i<txt.length(); i++){
        if(txt[i] == ' '){
            hasWhitespace = true;
            if(word.length() > 0){
                words.push_back(word);
                word = "";
            }
        }
        else if(txt[i] == ','){
            hasComma = true;
            if(word.length() > 0){
                words.push_back(word);
                word = "";
            }
        }
        else{
            word += txt[i];
        }
    }
    
    if(word.length() > 0){
        words.push_back(word);
    }
    
    if(words.size() == 0){
        words.push_back(to_string('z' - 'a' + 1));
    }
    
    return words;
}

bool issame(vector<string> a, vector<string> b){
    if(a.size() == b.size()){
        for(int i=0; i<a.size(); i++){
            if(a[i] != b[i]){
                return false;
            }
        }
        return true;
    }
    return false;
}

int main(){
    assert(issame(split_words(""), {"0"}));
    assert(issame(split_words("hello world"), {"hello", "world"}));
    assert(issame(split_words("apple,banana,orange"), {"apple", "banana", "orange"}));
    assert(issame(split_words("one,two,three"), {"one", "two", "three"}));
    assert(issame(split_words("a,b,c,d,e,f"), {"a", "b", "c", "d", "e", "f"}));
    
    return 0;
}