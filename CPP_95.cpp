Here is the completed code:

bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;
    bool all_lower = true;
    bool all_upper = true;
    for (auto it = dict.begin(); it != dict.end(); ++it) {
        if (isupper(it->first[0])) all_lower = false;
        if (!isupper(it->first[0])) all_upper = false;
    }
    return all_lower || all_upper;
}