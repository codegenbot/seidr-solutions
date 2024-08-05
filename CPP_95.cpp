#include <unordered_map>
#include <cassert>
#include <cctype> // Include <cctype> for islower and isupper functions

bool check_dict_case(const std::unordered_map<std::string, int>& dict) {
    if(dict.empty()) return false;

    bool hasLower = true, hasUpper = true; // Change variable names
    for(const auto& pair : dict) { // Use const auto& instead of auto const&
        for(char c : pair.first) {
            if(std::islower(c)) {
                hasUpper = false; // Change to hasUpper
            } else if(std::isupper(c)) {
                hasLower = false; // Change to hasLower
            }
        }
    }

    return hasLower || hasUpper; // Change to hasLower and hasUpper
}

// Add main function implementation if necessary