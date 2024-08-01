#include <iostream>
#include <map>
#include <cctype>

bool check_dict_case(const std::map<char, int>& dict) {
    bool all_lower = true;
    bool all_upper = true;

    for(auto const& pair : dict) {
        if(pair.first != std::tolower(pair.first)) {
            all_lower = false;
        }
        if(pair.first != std::toupper(pair.first)) {
            all_upper = false;
        }
    }

    return all_lower || all_upper;
}