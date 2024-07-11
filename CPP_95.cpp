bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool all_lower = true;
    bool all_upper = true;

    for (auto& pair : dict) {
        string key = pair.first;
        if (!all_lower && !all_upper) break;
        for (char& c : key) {
            if (!islower(c)) all_lower = false;
            if (!isupper(c)) all_upper = false;
        }
    }

    return all_lower || all_upper;
}