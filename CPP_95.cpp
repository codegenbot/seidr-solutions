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

    bool lower_case = true, upper_case = true;
    for (const auto &pair : dict) {
        if (!is_lower_case(pair.first)) lower_case = false;
        if (!is_upper_case(pair.first)) upper_case = false;
        if (!lower_case && !upper_case) return false;
    }
    return lower_case || upper_case;
}