```
#include <string>
#include <map>

bool check_dict_case(map<std::string,std::string> dict){
    if(dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for(auto& pair : dict) {
        std::string key = pair.first;
        if(!allLower && !allUpper) break;
        if(allLower) {
            allLower &= tolower(key.begin(), key.end()) == key;
        }
        if(allUpper) {
            allUpper &= toupper(key.begin(), key.end()) == key;
        }
    }

    return allLower || allUpper;
}