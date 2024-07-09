#include <map>
#include <string>
#include <cctype>
#include <cassert>
#include <algorithm>
#include <initializer_list>

bool check_dict_case(std::map<std::string, std::string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        if (!islower(pair.first[0]) && !isupper(pair.first[0])) {
            return false;
        }
        if (!allLower && !allUpper) break;
        if (!allLower) allUpper = true;
        if (!allUpper) allLower = true;
    }

    return allLower || allUpper;
}

int main() {
    assert(check_dict_case({}) == false);
    return 0;
}