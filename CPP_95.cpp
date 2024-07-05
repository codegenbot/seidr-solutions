#include <cctype>

bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;
    
    auto it = dict.begin();
    bool is_lower = islower(it->first[0]);
    bool is_upper = isupper(it->first[0]);

    for (const auto &pair : dict) {
        for (char c : pair.first) {
            if (isdigit(c)) return false;
        }
        if (is_lower && !all_of(pair.first.begin(), pair.first.end(), ::islower)) return false;
        if (is_upper && !all_of(pair.first.begin(), pair.first.end(), ::isupper)) return false;
    }
    return true;
}