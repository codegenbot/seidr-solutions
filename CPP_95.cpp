bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool all_lower = true;
    bool all_upper = true;

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        if (!all_lower && !all_upper) break;
        if (all_lower) all_lower = tolower(it->first).find_first_not_of('a'-'z') == string::npos;
        if (all_upper) all_upper = toupper(it->first).find_first_not_of('A'-'Z') == string::npos;
    }

    return all_lower || all_upper;
}