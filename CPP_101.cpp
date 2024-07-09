```cpp
#include <iostream>
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b){
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::string> words_string(std::string s){
    std::vector<std::string> result;
    std::string word = "";
    for(int i=0; i<s.length(); i++){
        if(s[i] == ' ' || s[i] == ','){
            if(word.length() <= 30) 
                result.push_back(word);
            else{
                result.push_back(std::string(word.begin(), word.begin()+29).append("..."));
            }
            word = "";
        }else{
            word += s[i];
        }
    }
    if(word.length() <= 30) 
        result.push_back(word);
    else{
        result.push_back(std::string(word.begin(), word.begin()+29).append("..."));
    }
    return result;
}

int main(){
    assert (issame(words_string("ahmed     , gamal") , std::vector<std::string> {"ahmed", "gamal"}));
}