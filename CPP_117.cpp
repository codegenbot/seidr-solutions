#include <iostream>
#include <vector>
#include <string>
#include <cassert>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b){
    return a == b;
}

std::vector<std::string> select_words(std::string s, int n){
    std::vector<std::string> words;
    std::string word = "";
    int consonant_count = 0;
    
    for(int i = 0; i < s.size(); i++){
        if(i == s.size() || s[i] == ' '){
            if(consonant_count == n){
                words.push_back(word);
            }
            word = "";
            consonant_count = 0;
        } else if(isalpha(s[i]) && !strchr("aeiouAEIOU", s[i])){
            consonant_count++;
        }
        if(isalpha(s[i])){
            word += s[i];
        }
    }
    
    return words;
}

int main(){
    assert (issame(select_words("a b c d e f", 1) , {"b", "c", "d", "f"}));
    
    return 0;
}