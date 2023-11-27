#include <map>
#include <string>

bool check_map_case(std::map<std::string, std::string> dict){
    if(dict.empty()){
        return false;
    }
    
    bool isLowerCase = true;
    bool isUpperCase = true;
    
    for(auto it = dict.begin(); it != dict.end(); it++){
        std::string key = it->first;
        
        if(key.empty()){
            return false;
        }
        
        if(key != tolower(key)){
            isLowerCase = false;
        }
        
        if(key != toupper(key)){
            isUpperCase = false;
        }
    }
    
    return isLowerCase || isUpperCase;
}