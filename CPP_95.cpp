#include <iostream>
#include <string>
#include <map>
#include <cassert>

bool check_dict_case(std::map<std::string, std::string> dict){
    if(dict.empty()){
        return false;
    }
    
    bool allLowerCase = true;
    bool allUpperCase = true;
    
    for(auto it = dict.begin(); it != dict.end(); ++it){
        std::string key = it->first;
        
        for(char c : key){
            if(isupper(c)){
                allLowerCase = false;
            }
            if(islower(c)){
                allUpperCase = false;
            }
        }
    }
    
    return allLowerCase || allUpperCase;
}