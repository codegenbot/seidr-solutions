#include <map>
#include <string>
#include <cctype>

bool check_dict_case(std::map<std::string, std::string> dict) {
    if(dict.empty()) {
        return false;
    }
    
    bool isLower = true;
    bool isUpper = true;
    
    for(const auto& pair : dict) {
        for(char c : pair.first) {
            if(std::islower(c)) {
                isUpper = false;
            } else if(std::isupper(c)) {
                isLower = false;
            }
        }
    }
    
    return isLower || isUpper;
}