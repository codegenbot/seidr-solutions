#include <map>
#include <string>
#include <cctype>

std::map<std::string, std::string> dict;

bool check_dict_case() {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto &pair : dict) {
        if (!islower(pair.first[0]) && !isupper(pair.first[0])) {
            allLower = false;
            allUpper = false;
            break;
        } else if (islower(pair.first[0])) {
            allUpper = false;
        } else {
            allLower = false;
        }
    }

    return allLower || allUpper;
}