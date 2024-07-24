bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool all_lower = true;
    bool all_upper = true;

    for (auto& pair : dict) {
        if (!all_lower && !all_upper) break;
        if (all_lower && !islower(pair.first.begin(), pair.first.end())) all_lower = false;
        if (all_upper && !isupper(pair.first.begin(), pair.first.end())) all_upper = false;
    }

    return all_lower || all_upper;
}