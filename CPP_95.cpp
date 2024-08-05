#include <unordered_map>
#include <string>
#include <cassert>
#include <cctype>

bool check_dict_case(const std::unordered_map<std::string, int>& dict) {
    if (dict.size() == 0) return false;

    bool hasLower = true, hasUpper = true;
    for (auto it = dict.begin(); it != dict.end(); ++it) {
        for (char c : it->first) {
            if (std::islower(c)) {
                hasLower = false;
            } else if (std::isupper(c)) {
                hasUpper = false;
            }
        }
    }

    return !hasLower && !hasUpper;
}