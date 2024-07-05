bool is_lower(const string &s) {
    for (char c : s) {
        if (!islower(c))
            return false;
    }
    return true;
}

bool is_upper(const string &s) {
    for (char c : s) {
        if (!isupper(c))
            return false;
    }
    return true;
}

bool check_dict_case(map<string, string> dict) {
    if (dict.empty())
        return false;

    bool lowerFlag = true, upperFlag = true;

    for (const auto& kv : dict) {
        if (!isalpha(kv.first[0])) {
            return false;
        }
        if (!is_lower(kv.first)) {
            lowerFlag = false;
        }
        if (!is_upper(kv.first)) {
            upperFlag = false;
        }
    }

    return lowerFlag || upperFlag;
}