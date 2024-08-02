#include <map>
#include <string>

bool check_dict_case(std::map<std::string, std::string> dict) {
    if (dict.empty()) return false;

    bool allUpper = true;
    bool allLower = true;

    for (auto& pair : dict) {
        if (!isupper(pair.first[0])) {
            allUpper = false;
        }
        if (!islower(pair.first[0])) {
            allLower = false;
        }
    }

    return allUpper || allLower;
}