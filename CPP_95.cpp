bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool all_lower = true;
    bool all_upper = true;

    for (auto& pair : dict) {
        string key = pair.first;
        if (!islower(key[0])) all_lower = false;
        if (!isupper(key[0])) all_upper = false;
    }

    return all_lower || all_upper;
}