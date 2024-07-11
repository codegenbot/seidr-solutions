bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool all_lower = true;
    bool all_upper = true;

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        if (!islower(it->first[0]) && !isupper(it->first[0])) {
            return false;
        }
        if (!all_lower) break;
        all_lower &= islower(it->first[0]);
    }

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        if (!islower(it->first[0]) && !isupper(it->first[0])) {
            return false;
        }
        if (!all_upper) break;
        all_upper &= isupper(it->first[0]);
    }

    return all_lower || all_upper;
}