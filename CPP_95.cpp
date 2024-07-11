#include <string>
#include <map>

bool check_dict_case(std::map<std::string, std::string> dict){
    if(dict.empty()) return false;
    
    bool isLower = true;
    bool isUpper = true;
    
    for(auto it = dict.begin(); it != dict.end(); ++it){
        for(char c : it->first){
            if(islower(c)){
                isUpper = false;
            } else if(isupper(c)){
                isLower = false;
            }
        }
    }
    
    return isLower || isUpper;
}