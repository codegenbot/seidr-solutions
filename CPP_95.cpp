#include <iostream>
#include <string>
#include <map>
#include <cassert>

bool check_dict_case(const std::map<std::string, int>& dict) {
    if(dict.empty()) return false;
    bool all_lower = true, all_upper = true;
    for(const auto& pair : dict) {
        std::string key = pair.first;
        bool is_lower = true, is_upper = true;
        for(char c : key) {
            if(!std::islower(c)) is_lower = false;
            if(!std::isupper(c)) is_upper = false;
        }
        if(!is_lower) all_lower = false;
        if(!is_upper) all_upper = false;
    }
    return all_lower || all_upper;
}

int main() {
    assert(check_dict_case({}) == false);
    return 0;
}