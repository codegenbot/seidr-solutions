#include <unordered_map>
#include <cassert>
#include <cctype>

bool check_dict_case(const std::unordered_map<std::string, int>& dict) {
    if(dict.empty()) return false;

    bool isLower = true, isUpper = true;
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

std::unordered_map<std::string, int> dict = {{"Hello", 5}, {"World", 3}};
assert(check_dict_case(dict) == true);

return 0;