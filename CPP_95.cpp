bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool all_lower = true;
    bool all_upper = true;

    for (auto& pair : dict) {
        string key = pair.first;
        if (!all_lower && !all_upper) break;

        if (isupper(key[0])) {
            if (!all_upper) all_upper = true;
            else all_lower = false;
        } else {
            if (!all_lower) all_lower = true;
            else all_upper = false;
        }
    }

    return all_lower || all_upper;
}