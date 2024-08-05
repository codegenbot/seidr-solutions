#include <unordered_map>
#include <cassert>
#include <cctype>

bool check_dict_case(const std::unordered_map<std::string, int>& dict) {
    if(dict.empty()) return false;

    bool hasLower = true, hasUpper = true;
    for(const auto& pair : dict) {
        for(char c : pair.first) {
            if(std::islower(c)) {
                hasUpper = false;
            } else if(std::isupper(c)) {
                hasLower = false;
            }
        }
    }

    return hasLower || hasUpper;
}

// Add main function implementation if necessary