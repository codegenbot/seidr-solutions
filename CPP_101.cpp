#include <vector>
#include <cassert>

std::vector<std::string> words_string(const std::string& s){
    std::vector<std::string> words;
    std::string word;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == ' ' || s[i] == ','){
            if(!word.empty()){
                words.push_back(word);
                word.clear();
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

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b){
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
    assert(issame(words_string("ahmed     , gamal"), {"ahmed", "gamal"}));
    return 0;
}