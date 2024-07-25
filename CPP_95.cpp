#include <iostream>
#include <unordered_map>
#include <cassert>

bool check_dict_case(std::unordered_map<std::string, int> dict) {
    if(dict.empty()) return false;

    bool all_lower = true;
    bool all_upper = true;

    for(auto const& pair : dict) {
        for(auto c : pair.first) {
            if(std::islower(c)) {
                all_upper = false;
            } else if(std::isupper(c)) {
                all_lower = false;
            }
        }
    }

    return all_lower || all_upper;
}

int main() {
    assert(check_dict_case({}) == false);
    return 0;
}