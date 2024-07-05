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

bool check_dict_case(map<string,string> dict) {
    if (dict.empty()) return false;

    bool lower_case = is_lower_case(dict.begin()->first);
    bool upper_case = is_upper_case(dict.begin()->first);

    for (const auto &pair : dict) {
        if (lower_case && !is_lower_case(pair.first)) return false;
        if (upper_case && !is_upper_case(pair.first)) return false;
    }

    return true;
}