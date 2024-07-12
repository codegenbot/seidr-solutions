#include <map>
#include <string>

bool check_dict_case(map<string,string> dict){
    if(dict.empty()) return false;
    
    bool all_lowercase = true;
    bool all_uppercase = true;
    
    for(auto const& entry : dict){
        string key = entry.first;
        
        if(key != tolower(key[0])){
            all_lowercase = false;
        }
        
        if(key != toupper(key[0])){
            all_uppercase = false;
        }
    }
    
    return all_lowercase || all_uppercase;
}