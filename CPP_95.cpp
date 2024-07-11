#include <map>
#include <cctype>
#include <string>

bool check_dict_case(std::map<std::string, std::string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        if (!std::islower(pair.first[0])) {
            allLower = false;
        }
        if (!std::isupper(pair.first[0])) {
            allUpper = false;
        }
    }

    return allLower || allUpper;
}