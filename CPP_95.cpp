#include <map>
#include <string>
#include <cctype>
#include <cassert>

bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        if (!islower(pair.first[0]) && !isupper(pair.first[0])) {
            return false;
        }
        if (islower(pair.first[0]))
            allLower = false;
        else
            allUpper = false;
    }

    return allLower || allUpper;
}

assert(check_dict_case({}) == false);