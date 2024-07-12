bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool all_lower = true;
    bool all_upper = true;

    for (auto& pair : dict) {
        if (!islower(pair.first[0]) && !isupper(pair.first[0])) {
            return false;
        }
        if (!all_lower) break;
        if (!all_upper) break;
        if (islower(pair.first[0])) all_upper = false;
        else all_lower = false;
    }

    return all_lower || all_upper;
}