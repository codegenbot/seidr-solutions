#include <map>
#include <string>
#include <cctype>

bool check_dict_case(std::map<std::string, std::string> dict){
    if(dict.empty()) return false;
    
    bool all_lower = true;
    bool all_upper = true;
    
    for(auto const& entry : dict) {
        std::string key = entry.first;
        
        if(!key.empty() && !all_lower && !all_upper) return false;
        
        if(key.empty() || key.find_first_not_of("abcdefghijklmnopqrstuvwxyz") != std::string::npos) return false;
        
        std::string lower_key;
        std::transform(key.begin(), key.end(), std::back_inserter(lower_key), ::tolower);
        
        std::string upper_key;
        std::transform(key.begin(), key.end(), std::back_inserter(upper_key), ::toupper);
        
        all_lower = all_lower && (key == lower_key);
        all_upper = all_upper && (key == upper_key);
    }
    
    return all_lower || all_upper;
}