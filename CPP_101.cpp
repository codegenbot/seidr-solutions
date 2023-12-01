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
    vector<string> input_1 = words_string("hello,world");
    vector<string> input_2 = words_string("hello,world");
    assert(issame(input_1, input_2));
    
    vector<string> input_3 = words_string("hello,world");
    vector<string> input_4 = words_string("hello,world!");
    assert(!issame(input_3, input_4));
    
    vector<string> input_5 = words_string("hello,world");
    vector<string> input_6 = words_string("hello,world,!");
    assert(!issame(input_5, input_6));
    
    vector<string> input_7 = words_string("hello,world");
    vector<string> input_8 = words_string("hello,world,");
    assert(!issame(input_7, input_8));
    
    vector<string> input_9 = words_string("hello,world");
    vector<string> input_10 = words_string("hello,world,");
    assert(!issame(input_9, input_10));
    
    vector<string> input_11 = words_string("");
    vector<string> input_12 = words_string("");
    assert(issame(input_11, input_12));
    
    vector<string> input_13 = words_string("hello,world");
    vector<string> input_14 = words_string("");
    assert(!issame(input_13, input_14));
    
    vector<string> input_15 = words_string("");
    vector<string> input_16 = words_string("hello,world");
    assert(!issame(input_15, input_16));
    
    return 0;
}