#include <string>
#include <cctype>

bool check_dict_case(std::map<std::string, std::string> dict) {
    if(dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for(auto p : dict) {
        std::string key = p.first;
        if(!allLower && !allUpper) break;
        if(allLower && !std::islower(key[0])) allLower = false;
        if(allUpper && !std::isupper(key[0])) allUpper = false;
    }

    return allLower || allUpper;
}