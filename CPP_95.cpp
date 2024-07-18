#include <iostream>
#include <map>
#include <string>
#include <cassert>

bool check_dict_case(std::map<std::string, std::string> dict){
    if(dict.empty()) return false;
    
    bool all_lower = true;
    bool all_upper = true;
    
    for(auto const& entry : dict) {
        std::string key = entry.first;
        
        if(!key.empty() && !all_lower && !all_upper) return false;
        
        if(key.empty() || key.find_first_not_of("abcdefghijklmnopqrstuvwxyz") != std::string::npos) return false;
        
        all_lower = all_lower && (key[0] == tolower(key[0]));
        all_upper = all_upper && (key[0] == toupper(key[0]));
    }
    
    return all_lower || all_upper;
}

int main() {
    assert(check_dict_case(std::map<std::string, std::string>{}) == false);
}