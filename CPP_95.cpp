#include <algorithm>

bool check_dict_case(map<string, string> dict) {
    if(dict.empty()) return false;

    bool all_lower = true;
    bool all_upper = true;

    for(auto it = dict.begin(); it != dict.end(); ++it) {
        string key = it->first;
        all_lower &= islower(std::tolower(key)[0]);
        all_upper &= isupper(std::toupper(key)[0]);
    }

    return (all_lower || all_upper);
}