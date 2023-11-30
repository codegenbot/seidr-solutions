#include <iostream>
#include <vector>
#include <string>
#include <cassert>
#include <algorithm>

std::vector<std::string> words_string(std::string s){
    std::vector<std::string> words;
    std::string word = "";
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

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b){
    return std::equal(a.begin(), a.end(), b.begin());
}

int main(){
    assert(issame(words_string("ahmed     , gamal"), {"ahmed", "gamal"}));
    std::cout << "Test Passed\n";

    return 0;
}