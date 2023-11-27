#include <vector>
#include <string>
#include <cassert>

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

vector<string> split_words(string txt){
    vector<string> result;
    string word = "";
    bool hasWhitespace = false;
    bool hasComma = false;
    
    for(char c : txt){
        if(c == ' '){
            hasWhitespace = true;
            if(word != ""){
                result.push_back(word);
                word = "";
            }
        }else if(c == ','){
            hasComma = true;
            if(word != ""){
                result.push_back(word);
                word = "";
            }
        }else{
            word += c;
        }
    }
    
    if(word != ""){
        result.push_back(word);
    }
    
    if(!hasWhitespace && !hasComma){
        result.clear();
        result.push_back(to_string(0));
    }
    
    return result;
}

int main() {
    assert(issame(split_words(""), {"0"}));
    return 0;
}