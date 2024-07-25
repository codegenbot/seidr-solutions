#include <iostream>
#include <unordered_map>
#include <cctype>

bool check_dict_case(const std::unordered_map<std::string, int>& dict) {
    if(dict.empty()) return false;
    bool is_lower = true, is_upper = true;
    for(auto const& pair : dict) {
        for(char c : pair.first) {
            if(std::islower(c)) {
                is_upper = false;
            } else if(std::isupper(c)) {
                is_lower = false;
            }
        }
    }
    return is_lower || is_upper;
}

int main() {
    assert(check_dict_case({}) == false);
    return 0;
}