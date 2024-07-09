#include <map>
#include <string>
#include <cctype>
#include <cassert>

bool check_dict_case(std::map<std::string, std::string> dict) {
    if (dict.empty()) return false;

    bool allUpper = true;
    bool allLower = true;

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        if (!allUpper && !allLower) break;
        if (allUpper) allUpper = std::tolower(it->first)[0] == 0;
        if (allLower) allLower = std::toupper(it->first)[0] == 0;
    }

    return allUpper && allLower;
}

int main() {
    assert(check_dict_case({}) == false);
    return 0;
}