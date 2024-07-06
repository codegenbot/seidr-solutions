#include <map>
#include <string>

#include <cctype>

bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool all_upper = true;
    bool all_lower = true;

    for (const auto& pair : dict) {
        string key = pair.first;
        if (!all_lower && !all_upper) break;
        all_lower &= std::islower(key[0]);
        all_upper &= std::isupper(key[0]);
    }

    return all_lower || all_upper;
}