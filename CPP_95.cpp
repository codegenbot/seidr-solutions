#include <cctype>

bool check_dict_case(map<string, string> dict) {
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