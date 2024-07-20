bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool all_upper = true;
    bool all_lower = true;

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        if (!all_upper && !all_lower) break;
        if (all_upper) {
            all_upper = all_upper && tolower(it->first).find_first_not_of("abcdefghijklmnopqrstuvwxyz") == string::npos;
        }
        if (all_lower) {
            all_lower = all_lower && toupper(it->first).find_first_not_of("ABCDEFGHIJKLMNOPQRSTUVWXYZ") == string::npos;
        }
    }

    return all_upper || all_lower;
}