#include <vector>
#include <string>
#include <cassert>
#include <cctype>
#include <algorithm>

bool issame(std::string s1, std::string s2);

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
    if(result.size() == 1 && result[0].find_first_not_of("abcdefghijklmnopqrstuvwxyz") == std::string::npos){
        int oddCount = 0;
        for(char c : result[0]){
            if(std::islower(c) && (c - 'a') % 2 == 1){
                oddCount++;
            }
        }
        result[0] = std::to_string(oddCount);
    }
    return result;
}