bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool all_upper = true;
    bool all_lower = true;

    for (auto& pair : dict) {
        if (!isupper(pair.first[0]) && !islower(pair.first[0])) {
            return false;
        }
        if (!all_upper && !all_lower) break;
        if (!all_upper) continue;
        all_lower = false;
    }

    return all_upper || all_lower;
}