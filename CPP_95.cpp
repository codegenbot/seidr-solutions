bool check_dict_case(map<string, string> dict) {
    bool all_upper = true;
    bool all_lower = true;

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        if (!all_upper && !all_lower)
            return false;
        if (all_upper) {
            if (std::any_of(it->first.begin(), it->first.end(), ::islower))
                all_upper = false;
        } else {
            if (std::any_of(it->first.begin(), it->first.end(), ::isupper))
                all_lower = false;
        }
    }

    return all_upper || all_lower;
}