#include <map>
#include <string>

bool check_dict_case(const std::map<std::string, std::string>& dict) {
    if(dict.empty()) {
        return false;
    }
    
    bool all_lowercase = true;
    bool all_uppercase = true;
    
    for(auto const& entry : dict) {
        std::string key = entry.first;
        
        for(char c : key) {
            if(islower(c)) {
                all_uppercase = false;
            } else if(isupper(c)) {
                all_lowercase = false;
            }
        }
    }
    
    return all_lowercase || all_uppercase;
}