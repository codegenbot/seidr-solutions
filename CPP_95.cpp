#include <map>
#include <string>
#include <cctype>
#include <cassert>
#include <algorithm>

bool check_dict_case(std::map<std::string, std::string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        if (!std::islower(pair.first[0]) && !std::isupper(pair.first[0])) {
            return false;
        }
        if (!allLower && !allUpper) break;
        if (!allLower) allUpper = true;
        if (!allUpper) allLower = true;
    }

    return allLower || allUpper;
}

int main() {
    std::map<std::string, std::string> dict;
    assert(check_dict_case(dict) == false);
    return 0;
}