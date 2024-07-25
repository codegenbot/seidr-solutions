bool check_dict_case(map<string, string> dict) {
    if (dict.empty())
        return false;

    bool all_lower = true;
    bool all_upper = true;

    for (auto &it : dict) {
        string key = it.first;
        if (!all_lower && !all_upper)
            break;

        if (!all_lower) {
            if (any_of(key.begin(), key.end(), ::isdigit)) {
                all_lower = false;
                break;
            }
            if (any_of(key.begin(), key.end(), ::isupper))
                all_upper = false;
        } else {
            if (any_of(key.begin(), key.end(), ::isupper)) {
                all_lower = false;
                break;
            }
            if (any_of(key.begin(), key.end(), ::isdigit))
                all_upper = false;
        }
    }

    return all_lower || all_upper;
}