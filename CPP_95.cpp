#include <unordered_map>
#include <cassert>
#include <cctype> // Add this header for islower and isupper functions

bool check_dict_case(const std::unordered_map<std::string, int>& dict) {
    if(dict.empty()) return false;

    bool islower = true, isupper = true; // Change variable names
    for(auto const& pair : dict) {
        for(char c : pair.first) {
            if(std::islower(c)) { // Use std::islower instead of islower
                isupper = false; // Change to isupper
            } else if(std::isupper(c)) { // Use std::isupper instead of isupper
                islower = false; // Change to islower
            }
        }
    }

    return islower || isupper; // Change to islower and isupper
}