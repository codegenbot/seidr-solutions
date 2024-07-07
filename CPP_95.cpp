bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool all_upper = true;
    bool all_lower = true;

    for (const auto& pair : dict) {
        if (!all_upper && !all_lower) break;
        if (!islower(pair.first[0]) && !isupper(pair.first[0])) {
            all_upper = false;
            all_lower = false;
            break;
        } else {
            all_upper ^= isupper(pair.first[0]);
            all_lower ^= islower(pair.first[0]);
        }
    }

    return all_upper || all_lower;
}