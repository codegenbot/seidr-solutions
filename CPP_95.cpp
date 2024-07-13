bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool all_upper = true;
    bool all_lower = true;

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        if (all_upper && !isupper(it->first)) all_upper = false;
        if (all_lower && !islower(it->first)) all_lower = false;
    }

    return all_upper || all_lower;
}