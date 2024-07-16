#include <iostream>
#include <map>
#include <string>
#include <cctype>

bool check_dict_case(std::map<std::string, std::string> dict){
    if(dict.empty()) return false;
    
    bool all_lower = true;
    bool all_upper = true;
    
    for(auto const& pair : dict){
        std::string key = pair.first;
        
        if(!key.empty() && !all_lower && !all_upper){
            return false;
        }
        
        if(!key.empty() && all_lower && !std::islower(key[0])){
            all_lower = false;
        }
        
        if(!key.empty() && all_upper && !std::isupper(key[0])){
            all_upper = false;
        }
    }
    
    return all_lower || all_upper;
}