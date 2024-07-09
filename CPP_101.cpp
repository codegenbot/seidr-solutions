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
            if(word.size() <= 30){ 
                result.push_back(word);
                word = "";
            }else{
                while(word.size() > 30){
                    int pos = word.find_last_of(' ');
                    if(pos != -1) {
                        word = word.substr(0, pos+1);
                        result.push_back(word);
                        word = s.substr(i- (pos +1), i - i + 1); 
                        break;
                    }else{
                        result.push_back(word);
                        word = "";
                        break;  
                    }
                }
            }
        }else{
            if(s[i] != ' ' && s[i] != ',')  
                word += s[i];
        }
    }
    if(word.size() <= 30)  
        result.push_back(word);
    return result;
}

int main(){
    assert(issame(words_string("ahmed     , gamal"), std::vector<std::string>{"ahmed", "gamal"}));
    return 0;
}