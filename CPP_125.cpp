#include <cassert>
#include <string>
#include <vector>

std::vector<std::string> split_words(std::string txt) {
    std::vector<std::string> result;
    std::string word = "";
    bool hasWhitespace = false;
    bool hasComma = false;
    
    for(char c : txt){
        if(c == ' '){
            hasWhitespace = true;
            result.push_back(word);
            word = "";
        } 
        else if(c == ','){
            hasComma = true;
            result.push_back(word);
            word = "";
        } 
        else {
            word += c;
        }
    }
    
    if(hasWhitespace || hasComma){
        if(word != ""){
            result.push_back(word);
        }
    } 
    else {
        int oddCount = 0;
        for(char c : txt){
            if(islower(c) && (c - 'a') % 2 == 1){
                oddCount++;
            }
        }
        result.push_back(std::to_string(oddCount));
    }
    
    return result;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}