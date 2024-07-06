#include <map>
#include <algorithm>
#include <string>

bool check_dict_case(std::map<std::string, std::string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        std::string key = pair.first;
        if (!allLower && !allUpper) break;
        if (!allLower) {
            allLower = std::all_of(key.begin(), key.end(), ::islower);
        }
        if (!allUpper) {
            allUpper = std::all_of(key.begin(), key.end(), ::isupper);
        }
    }

    return allLower || allUpper;
}