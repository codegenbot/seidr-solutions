bool check_dict_case(map<string, string> dict) {
    bool all_upper = true;
    bool all_lower = true;

    if (dict.empty()) return false;

    for (auto& pair : dict) {
        if (!all_upper && !all_lower) break;
        string key = pair.first;
        if (isupper(key[0])) all_lower = false;
        else if (islower(key[0])) all_upper = false;
    }

    return all_upper || all_lower;
}