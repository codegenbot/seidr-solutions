#include <cctype>

bool is_lower_case(const string &s) {
    for (char c : s) {
        if (!islower(c)) return false;
    }
    return true;
}

bool is_upper_case(const string &s) {
    for (char c : s) {
        if (!isupper(c)) return false;
    }
    return true;
}

bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    auto it = dict.begin();
    bool all_lower = is_lower_case(it->first);
    bool all_upper = is_upper_case(it->first);

    for (; it != dict.end(); ++it) {
        if (all_lower && !is_lower_case(it->first)) return false;
        if (all_upper && !is_upper_case(it->first)) return false;
    }

    return true;
}