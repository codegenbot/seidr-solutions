#include <cctype>
#include <map>
#include <string>

bool check_dict_case(std::map<std::string, std::string> dict) {
    if (dict.empty()) return false;
    
    bool isLower = true, isUpper = true;
    for (const auto& pair : dict) {
        for (char c : pair.first) {
            if (!islower(c)) {
                isLower = false;
            }
            if (!isupper(c)) {
                isUpper = false;
            }
        }
    }
    
    return isLower || isUpper;
}