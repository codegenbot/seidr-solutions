```cpp
#include <cassert>
#include <map>
#include <string>
#include <cctype>

bool check_dict_case(const std::map<std::string, std::string>& dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        if (!std::islower(it->first[0]) && !std::isupper(it->first[0])) {
            allLower = false;
            allUpper = false;
            break;
        } else if ((allLower && std::isupper(it->first[0])) || (allUpper && std::islower(it->first[0]))) {
            allLower = false;
            allUpper = false;
            break;
        }
    }

    return allLower || allUpper;
}