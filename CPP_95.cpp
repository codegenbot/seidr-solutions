#include <string>
#include <map>

bool check_dict_case(std::map<std::string, std::string> dictionary){
    if(dictionary.empty()){
        return false;
    }
    
    bool allLowerCase = true;
    bool allUpperCase = true;
    
    for(auto it = dictionary.begin(); it != dictionary.end(); ++it){
        std::string key = it->first;
        
        if(key.empty()){
            return false;
        }
        
        for(auto ch : key){
            if(ch != std::tolower(ch)){
                allLowerCase = false;
            }
            
            if(ch != std::toupper(ch)){
                allUpperCase = false;
            }
            
            if(!allLowerCase && !allUpperCase){
                return false;
            }
        }
    }
    
    return true;
}