bool check_dict_case(map<string, string> dict) {
    bool all_lower = true;
    bool all_upper = true;

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        if (!all_lower && !all_upper)
            return false;
        if (all_lower && !islower(it->first[0]))
            all_lower = false;
        if (all_upper && !isupper(it->first[0]))
            all_upper = false;
    }

    return all_lower || all_upper;
}