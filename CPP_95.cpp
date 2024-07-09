#include <iostream>
#include <map>
#include <cctype>

bool check_dict_case(std::map<std::string, std::string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        if (!islower(pair.first[0]) && !isupper(pair.first[0])) {
            allLower = false;
            allUpper = false;
            break;
        } else if (!allLower && !allUpper) continue;

        if (!allLower && islower(pair.first[0])) allLower = true;
        if (!allUpper && isupper(pair.first[0])) allUpper = true;
    }

    return allLower || allUpper;
}