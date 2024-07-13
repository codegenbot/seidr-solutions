bool check_dict_case(map<string, string> dict) {
    bool all_upper = true;
    bool all_lower = true;

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        if (!all_upper && !all_lower)
            return false;
        if (isupper(it->first[0]))
            all_upper = false;
        else
            all_lower = false;
    }
    if (dict.empty())
        return false;
    return all_upper || all_lower;
}