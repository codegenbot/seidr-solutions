bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool all_upper = true;
    bool all_lower = true;

    for (auto& pair : dict) {
        string key = pair.first;
        if (!all_upper && !all_lower) break;
        if (!all_upper) all_upper = isupper(key[0]);
        if (!all_lower) all_lower = islower(key[0]);
    }

    return all_upper && all_lower;
}