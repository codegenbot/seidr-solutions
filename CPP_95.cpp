#include <iostream>
#include <cassert>
#include <unordered_map>

bool check_dict_case(const std::unordered_map<std::string, int>& dict){
    if(dict.empty()) return false;
    
    bool isLower = true;
    bool isUpper = true;
    
    for(const auto& pair : dict){
        for(char c : pair.first){
            if(islower(c)){
                isUpper = false;
            } else if(isupper(c)){
                isLower = false;
            }
        }
    }
    
    return isLower || isUpper;
}