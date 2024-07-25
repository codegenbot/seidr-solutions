#include <string>
#include <map>
#include <cctype>

bool check_dict_case(const std::map<std::string, std::string>& dict){
    if(dict.empty()) return false;
    
    bool all_lower = true;
    bool all_upper = true;
    
    for(const auto& entry : dict){
        std::string key = entry.first;
        bool is_lower = true;
        bool is_upper = true;
        
        for(char c : key){
            if(std::islower(c)){
                is_upper = false;
            } else if(std::isupper(c)){
                is_lower = false;
            }
        }
        
        all_lower = all_lower && is_lower;
        all_upper = all_upper && is_upper;
    }
    
    return all_lower || all_upper;
}