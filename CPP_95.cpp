#include <iostream>
#include <string>
#include <map>
#include <cassert>

bool check_dict_case(std::map<std::string, std::string> dict){
    if(dict.empty()){
        return false;
    }
    
    bool allLower = true;
    bool allUpper = true;
    
    for(auto it = dict.begin(); it != dict.end(); ++it){
        std::string key = it->first;
        
        for(char c : key){
            if(std::islower(c)){
                allUpper = false;
            }
            else if(std::isupper(c)){
                allLower = false;
            }
        }
    }
    
    return allLower || allUpper;
}