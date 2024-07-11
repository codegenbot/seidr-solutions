bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool all_upper = true;
    bool all_lower = true;

    for (const auto& pair : dict) {
        string key = pair.first;
        if (!isupper(key[0])) {
            all_upper = false;
            break;
        }
        if (!islower(key[0])) {
            all_lower = false;
            break;
        }
    }

    return all_upper || all_lower;
}