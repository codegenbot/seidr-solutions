bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool all_upper = true;
    bool all_lower = true;

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        if (!all_lower && !all_upper) break;
        if (all_lower && !islower(it->first[0])) all_lower = false;
        if (all_upper && !isupper(it->first[0])) all_upper = false;
    }

    return all_lower || all_upper;
}