Here is the completed code:

bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool all_upper = true;
    bool all_lower = true;

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        string key = it->first;
        bool is_upper = isupper(key[0]);
        if (!is_upper && !all_lower) {
            all_upper = false;
        }
        if (is_upper && !all_upper) {
            all_lower = false;
        }
    }

    return all_upper || all_lower;
}