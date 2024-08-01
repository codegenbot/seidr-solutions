bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool all_upper = true;
    bool all_lower = true;

    for (auto& pair : dict) {
        if (!isupper(pair.first[0])) all_upper = false;
        if (!islower(pair.first[0])) all_lower = false;
    }

    return all_upper || all_lower;
}