#include <map>
#include <string>
#include <cstddef> // include iterator header

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
        else if (!allLower) allUpper = isupper(pair.first[0]);
        else allLower &= islower(pair.first[0]);
    }

    return allLower || allUpper;
}