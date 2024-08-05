#include <unordered_map>
#include <cassert>
#include <cctype>

bool check_dict_case(const std::unordered_map<std::string, int>& dict) {
    if (dict.empty()) return false;

    bool hasLower = true, hasUpper = true;
    for (const auto& entry : dict) {
        for (char c : entry.first) {
            if (std::islower(c)) {
                hasLower = false;
            } else if (std::isupper(c)) {
                hasUpper = false;
            }
        }
    }

    return hasLower || hasUpper;
}