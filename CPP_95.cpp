#include <iostream>
#include <string>
#include <unordered_map>
#include <cassert>

bool check_dict_case(const std::unordered_map<std::string, int>& dict) {
    if(dict.empty()) return false;

    bool all_lower = true;
    bool all_upper = true;

    for(const auto& pair : dict) {
        for(char c : pair.first) {
            if(islower(c)) {
                all_upper = false;
            } else if(isupper(c)) {
                all_lower = false;
            }
        }
    }

    return all_lower || all_upper;
}

int main() {
    assert(check_dict_case({{"abc", 1}, {"DEF", 2}}) == false);
    assert(check_dict_case({{"abc", 1}, {"def", 2}}) == true);

    return 0;
}