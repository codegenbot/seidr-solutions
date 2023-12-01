#include <map>
#include <string>

bool check_map_case(const std::map<std::string, std::string>& dict){
    if(dict.empty()){
        return false;
    }
    
    bool allLower = true;
    bool allUpper = true;
    
    for(auto it = dict.begin(); it != dict.end(); ++it){
       std::string key = it->first;
        
        if(!islower(key[0])){
            allLower = false;
        }
        
        if(!isupper(key[0])){
            allUpper = false;
        }
        
        if(!allLower && !allUpper){
            return false;
        }
    }
    
    return true;
}