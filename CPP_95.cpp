#include <map>
#include <string>

bool check_dict_case(std::map<std::string, std::string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        if (!allLower && !allUpper) break;
        if (!allLower) allLower = tolower(pair.first)[0] == toupper(pair.first)[0];
        if (!allUpper) allUpper = toupper(pair.first)[0] == tolower(pair.first)[0];
    }

    return allLower || allUpper;
}