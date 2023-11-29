#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b){
    // function implementation goes here
}

vector<string> split_string(string s){
    vector<string> words;
    string word;
    for(int i=0; i<s.length(); i++){
        if(s[i] == ' ' || s[i] == ','){
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

int main(){
    assert(issame(split_string("ahmed     , gamal"), {"ahmed", "gamal"}));
    // additional test cases go here
    return 0;
}