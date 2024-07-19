#include <vector>
#include <string>
#include <cassert>
#include <cctype>

std::vector<std::string> split_words(std::string txt){
    std::vector<std::string> result;
    std::string word = "";
    for(char c : txt){
        if(c == ' ' || c == ','){
            if(!word.empty()){
                result.push_back(word);
                word = "";
            }
        } else {
            word += c;
        }
    }
    if(!word.empty()){
        result.push_back(word);
    }
    if(result.empty()){
        int odd_lower_case_count = 0;
        for(char c : txt){
            if(std::islower(c) && (c - 'a') % 2 == 1){
                odd_lower_case_count++;
            }
        }
        result.push_back(std::to_string(odd_lower_case_count));
    }
    return result;
}