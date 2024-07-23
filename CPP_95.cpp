#include <map>
#include <cctype>
#include <string>

bool check_dict_case(std::map<std::string, std::string> dict) {
    if (dict.empty()) return false;
    bool allLower = true;
    bool allUpper = true;
    for (auto it = dict.begin(); it != dict.end(); ++it) {
        std::string key = it->first;
        if (!allLower && !allUpper) break;
        if (!allLower) allLower = std::islower(key[0]);
        if (!allUpper) allUpper = std::isupper(key[0]);
    }
    return allLower || allUpper;
}

int main() {
    // code to test the function
    return 0;
}