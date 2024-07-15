#include <map>
#include <string>

bool check_dict_case(std::map<std::string, std::string> dict){
    if(dict.empty()) return false;
    
    bool all_lower = true;
    bool all_upper = true;
    
    for(auto const& pair : dict){
        std::string key = pair.first;
        bool is_lower = true;
        bool is_upper = true;
        
        for(char c : key){
            if(!std::islower(c)){
                is_lower = false;
            }
            if(!std::isupper(c)){
                is_upper = false;
            }
        }
        
        all_lower = all_lower && is_lower;
        all_upper = all_upper && is_upper;
    }
    
    return all_lower || all_upper;
}