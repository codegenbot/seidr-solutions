#include <unordered_map>
#include <cassert>
#include <cctype> // Add this header for islower and isupper functions

bool check_dict_case(const std::unordered_map<std::string, int>& dict) {
    if(dict.empty()) return false;

    bool hasLower = true, hasUpper = true; // Change variable names
    for(auto const& pair : dict) {
        for(char c : pair.first) {
            if(std::islower(c)) { // Use std::islower instead of islower
                hasUpper = false; // Change to hasUpper
            } else if(std::isupper(c)) { // Use std::isupper instead of isupper
                hasLower = false; // Change to hasLower
            }
        }
    }

    return hasLower || hasUpper; // Change to hasLower and hasUpper
}

int main() {
    // main function implementation if needed
    return 0;
}