bool check_dict_case(map<string, string> dict) {
    if (dict.empty())
        return false;

    bool all_lower = true;
    bool all_upper = true;

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        auto key = it->first;
        for (char &c : key) {
            c = tolower(c);
        }
        if (!all_upper || !all_lower)
            break;
    }

    return all_lower && all_upper;
}