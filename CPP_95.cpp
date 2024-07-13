Here is the completed code:

bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool all_lower = true;
    bool all_upper = true;

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        string key = it->first;
        if (!all_lower && !all_upper)
            return false;

        for (char &c : key) {
            if (isupper(c))
                all_lower = false;
            else
                all_upper = false;
        }
    }

    return all_lower || all_upper;
}