#include <iostream>
#include <cassert>
#include <map>

bool check_dict_case(const std::map<std::string, int>& dict) {
    if (dict.empty()) return false;
    bool is_lower = true, is_upper = true;
    for(auto const& pair : dict) {
        for(char c : pair.first) {
            if(islower(c)) {
                is_upper = false;
            } else if(isupper(c)) {
                is_lower = false;
            }
        }
    }
    return is_lower || is_upper;
}

int main() {
    assert(check_dict_case({}) == false);
    // Add more test cases here
    return 0;
}