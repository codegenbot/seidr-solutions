bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool all_lower = true;
    bool all_upper = true;

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        string key = it->first;
        for (char& c : key) {
            if (!islower(c)) {
                all_lower = false;
                break;
            }
            if (!isupper(c)) {
                all_upper = false;
                break;
            }
        }
    }

    return all_lower || all_upper;
}