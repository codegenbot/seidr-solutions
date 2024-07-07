#include <string>
#include <map>

bool check_dict_case(std::map<std::string, std::string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        if (!islower(pair.first[0])) {
            allLower = false;
        }
        if (!isupper(pair.first[0])) {
            allUpper = false;
        }
    }

    return allLower || allUpper;
}