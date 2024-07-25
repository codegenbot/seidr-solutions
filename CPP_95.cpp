bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool all_upper = true;
    bool all_lower = true;

    for (const auto& pair : dict) {
        if (!all_lower && !all_upper)
            return false;

        if (!islower(pair.first[0])) {
            all_lower = false;
        }

        if (!isupper(pair.first[0])) {
            all_upper = false;
        }
    }

    return all_lower || all_upper;
}