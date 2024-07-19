#include <string>
#include <map>
#include <cassert>

bool check_dict_case(std::map<std::string, std::string> dict){
    if(dict.empty()) return false;
    
    bool all_lower = true;
    bool all_upper = true;
    
    for(auto const& pair : dict){
        std::string key = pair.first;
        bool is_lower = true;
        bool is_upper = true;
        
        for(char c : key){
            if(islower(c)) is_upper = false;
            if(isupper(c)) is_lower = false;
        }
        
        all_lower = all_lower && is_lower;
        all_upper = all_upper && is_upper;
    }
    
    return all_lower || all_upper;
}