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
    int size = 2;
    std::vector<std::string>().swap(result);
    result.reserve(size);

    std::string word = "";
    for(int i=0; i<s.length(); i++){
        if(s[i] == ' ' || s[i] == ','){
            if(!word.empty()){
                if(result.size() >= size) {
                    result.resize(result.capacity()*2 + 1);
                    size *= 2;
                }
                result.push_back(word);
                word = "";
            }
        }else{
            word += s[i];
        }
    }
    if(!word.empty())
        if(result.size() >= size) {
            result.resize(result.capacity()*2 + 1);
            size *= 2;
        }
        else result.push_back(word);

    return result;
}

int main(){
    assert (issame(words_string("ahmed     , gamal") , std::vector<std::string> {"ahmed", "gamal"}));
    return 0;
}