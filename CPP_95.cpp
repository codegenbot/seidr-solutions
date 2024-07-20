#include <iostream>
#include <string>
#include <map>
#include <cctype>

bool check_dict_case(std::map<std::string, std::string> dict){
    if(dict.empty()) return false;
    
    bool all_lowercase = true;
    bool all_uppercase = true;
    
    for(const auto& pair : dict){
        if(pair.first.empty() || !isalpha(pair.first[0])) return false;
        
        if(!all_lowercase && !all_uppercase) return false;
        
        if(all_lowercase && !islower(pair.first[0])) all_lowercase = false;
        if(all_uppercase && !isupper(pair.first[0])) all_uppercase = false;
    }
    
    return (all_lowercase || all_uppercase);
}