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

std::vector<std::string> split_string(std::string s){
    std::vector<std::string> result;
    std::string word = "";
    for(int i=0; i<s.length(); i++){
        if(s[i] == ' ' || s[i] == ','){
            if(word.size() <= 100){ 
                result.push_back(word);
                word = "";
            }else{
                word.resize(100); 
                result.push_back(word);
                word.resize(0); 
            }
        }else{
            if(word.size() < 100) 
                word += s[i];
        }
    }
    if(word.size() <= 100)
        result.push_back(word);
    return result;
}

int main(){
    assert (issame(split_string("ahmed     , gamal") , std::vector<std::string> {"ahmed", "gamal"}));
    return 0;
}