bool check_dict_case(map<string, string> dict) {
    if (dict.empty())
        return false;

    bool all_upper = true;
    bool all_lower = true;

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        if (!all_lower && !all_upper)
            return false;

        string key = it->first;
        if (isupper(key[0]))
            all_lower = false;
        else
            all_upper = false;
    }

    return all_upper || all_lower;
}