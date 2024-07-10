#include <map>
#include <string>
#include <cctype>

bool check_dict_case(std::map<std::string, std::string> dict) {
    if (dict.empty()) return false;

    bool all_lower = true;
    bool all_upper = true;

    for (auto& pair : dict) {
        if (!islower(pair.first[0]) && !isupper(pair.first[0])) {
            return false;
        }
        if (!all_lower || !all_upper) continue;
        all_lower &= islower(pair.first[0]);
        all_upper &= isupper(pair.first[0]);
    }

    return all_lower || all_upper;
}