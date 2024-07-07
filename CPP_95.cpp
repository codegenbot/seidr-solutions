bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool all_upper = true;
    bool all_lower = true;

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        if (!all_upper && !all_lower) break;
        if (!all_upper) all_upper = all_to_upper(it->first);
        if (!all_lower) all_lower = all_to_lower(it->first);
    }

    return all_upper || all_lower;
}

bool all_to_upper(const string& s) {
    for (char& c : s) {
        if (c >= 'a' && c <= 'z') c -= ('a' - 'A');
        else if (c < 'A') break;
    }
    return true;
}

bool all_to_lower(const string& s) {
    for (char& c : s) {
        if (c >= 'A' && c <= 'Z') c += ('a' - 'A');
        else if (c > 'z') break;
    }
    return true;
}