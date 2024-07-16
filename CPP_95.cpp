#include <map>
#include <string>

bool check_dict_case(std::map<std::string, std::string> dict){
    if(dict.empty()) return false;
    
    bool all_lower = true;
    bool all_upper = true;
    
    for(auto const& pair : dict){
        for(char c : pair.first){
            if(std::islower(c)){
                all_upper = false;
            } else if(std::isupper(c)){
                all_lower = false;
            }
        }
    }
    
    return all_lower || all_upper;
}