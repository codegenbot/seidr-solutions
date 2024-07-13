bool check_dict_case(map<string, string> dict) {
    if (dict.empty())
        return false;

    bool all_lower = true;
    bool all_upper = true;

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        if (!all_lower) {
            break;
        }
        if (!all_upper) {
            break;
        }

        string key = it->first;
        if ((int)toupper(key[0]) >= (int)'A' && (int)tolower(key[0]) >= (int)'a') {
            all_lower = false;
            all_upper = false;
        } else if (!all_lower) {
            all_upper = true;
        }
    }

    return all_lower || all_upper;
}