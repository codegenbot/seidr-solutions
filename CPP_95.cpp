#include <iostream>
#include <map>
#include <cassert>

bool check_dict_case(const std::map<std::string, std::string>& dict){
    if(dict.empty()) return false;
    
    bool all_lower = true;
    bool all_upper = true;
    
    for(const auto& entry : dict){
        const std::string& key = entry.first;
        
        for(char c : key){
            if(!islower(c)){
                all_lower = false;
                break;
            }
        }
        
        for(char c : key){
            if(!isupper(c)){
                all_upper = false;
                break;
            }
        }
    }
    
    return all_lower || all_upper;
}

int main() {
    assert(check_dict_case({}) == false);
    
    return 0;
}