#include <map>
#include <string>
#include <cctype>

bool check_dict_case(std::map<std::string, std::string> dict) {
    bool allLower = true;
    bool allUpper = true;

    for(auto& pair : dict) {
        if(dict.empty()) return false; // Check if map is empty
        std::string key = pair.first;
        if(!allLower && !allUpper) break; // If both conditions are not met, stop checking

        if(allLower && !std::islower(key[0])) allLower = false; // Check if first character of the key is lowercase
        if(allUpper && !std::isupper(key[0])) allUpper = false; // Check if first character of the key is uppercase
    }

    return allLower || allUpper;
}