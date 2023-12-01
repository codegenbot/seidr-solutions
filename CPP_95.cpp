#include <string>
#include <map>
#include <cassert>

bool check_dict_case(std::map<std::string, std::string> dict){
    if(dict.empty())
        return false;
    
    bool isLower = true;
    bool isUpper = true;
    
    for(auto it = dict.begin(); it != dict.end(); ++it){
        std::string key = it->first;
        
        if(key.empty())
            return false;
        
        if(isLower && !islower(key[0]))
            isLower = false;
        
        if(isUpper && !isupper(key[0]))
            isUpper = false;
        
        if(!isLower && !isUpper)
            return false;
    }
    
    return true;
}

int main(){
    assert(check_dict_case(std::map<std::string, std::string>{}) == false);
    // ...
}