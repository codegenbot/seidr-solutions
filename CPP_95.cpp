bool check_dict_case(map<string, string> dict) {
    bool all_lower = true;
    bool all_upper = true;

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        if (!all_lower && !all_upper)
            return false;  // Mixed case

        string key = it->first;
        if (!all_lower && !islower(key[0]))
            all_lower = false;
        if (!all_upper && !isupper(key[0]))
            all_upper = false;
    }

    return all_lower || all_upper;
}