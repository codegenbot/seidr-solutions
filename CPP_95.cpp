#include <string>
#include <map>
#include <cctype>

bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        string key = it->first;
        if (!allLower && !allUpper) break;
        if (!allLower) {
            allLower = allUpper = tolower(key[0]) == toupper(key[0]);
        }
    }

    return allLower || allUpper;
}