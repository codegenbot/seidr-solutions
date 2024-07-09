#include <map>
#include <string>
#include <cctype>

bool check_dict_case(std::map<std::string, std::string> dict) {
    if (dict.empty()) return false;

    bool allUpper = true;
    bool allLower = true;

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        if (!allUpper && !allLower) break;
        if (allUpper) allUpper = true;
        if (allLower) allLower = true;
        for (char c : it->first) {
            if (!allUpper && !allLower) break;
            if (allUpper) allUpper = std::isupper(c);
            if (allLower) allLower = std::islower(c);
        }
    }

    return allUpper && allLower;
}