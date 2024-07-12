#include <map>
#include <string>

bool check_dict_case(std::map<std::string, std::string> dict) {
    bool allLower = true;
    bool allUpper = true;

    for(auto& pair : dict) {
        if(dict.empty()) return false; 
        string key = pair.first;
        if(!allLower && !allUpper) break; 

        if(allLower && !islower(key[0])) allLower = false; 
        if(allUpper && !isupper(key[0])) allUpper = false; 
    }

    return allLower || allUpper;
}