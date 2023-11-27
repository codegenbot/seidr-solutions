#include <string>

bool check_dict_case(std::map<std::string,std::string> dict){
    if(dict.empty()){
        return false;
    }
    
    bool all_lower = true;
    bool all_upper = true;
    
    for(auto it = dict.begin(); it != dict.end(); ++it){
        std::string key = it->first;
        
        for(char c : key){
            if(isupper(c)){
                all_lower = false;
            }
            if(islower(c)){
                all_upper = false;
            }
        }
    }
    
    return all_lower || all_upper;
}