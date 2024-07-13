bool check_dict_case(map<string, string> dict) {
    bool all_lower = true;
    bool all_upper = true;

    for (auto& pair : dict) {
        if (dict.empty()) return false;
        if (!all_lower && !all_upper) break;
        if (!all_lower) all_lower = islower(pair.first[0]);
        if (!all_upper) all_upper = isupper(pair.first[0]);
    }

    return all_lower || all_upper;
}