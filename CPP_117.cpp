#include <iostream>
#include <cassert>
#include <vector>
#include <string>

std::vector<std::string> select_words(std::string s, int n);

bool issame(std::vector<std::string> a, std::vector<std::string> b){
    return a == b;
}

std::vector<std::string> select_words(std::string s, int n){
    std::vector<std::string> result;
    if(s.empty()){
        return result;
    }
    std::string word = "";
    for(int i = 0; i < s.length(); i++){
        if(s[i] != ' '){
            word += s[i];
        }
        else{
            int consonantCount = 0;
            for(int j = 0; j < word.length(); j++){
                if(word[j] != 'a' && word[j] != 'e' && word[j] != 'i' && word[j] != 'o' && word[j] != 'u'){
                    consonantCount++;
                }    
            }
            if(consonantCount == n){
                result.push_back(word);
            }
            word = "";
        }
    }
    int consonantCount = 0;
    for(int j = 0; j < word.length(); j++){
        if(word[j] != 'a' && word[j] != 'e' && word[j] != 'i' && word[j] != 'o' && word[j] != 'u'){
            consonantCount++;
        }
    }
    if(consonantCount == n){
        result.push_back(word);
    }
    return result;
}

int main(){
    assert(issame(select_words("a b c d e f", 1), {"b", "c", "d", "f"}));
    return 0;
}