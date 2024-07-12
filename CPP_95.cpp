#include <map>
#include <string>
#include <cctype>

bool check_dict_case(std::map<std::string, std::string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        std::string key = pair.first;
        if (!std::islower(key[0])) allLower = false;
        if (!std::isupper(key[0])) allUpper = false;
    }

    return allLower || allUpper;
}