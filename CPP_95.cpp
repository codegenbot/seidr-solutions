Here is the completed code:

bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool all_lower = true;
    bool all_upper = true;

    for (auto& pair : dict) {
        string key = pair.first;
        if ((int)tolower((unsigned char)key[0]) != (int)toupper((unsigned char)key[0])) {
            all_lower = false;
            all_upper = false;
            break;
        } else if (!all_lower && !all_upper) {
            break;
        } else if (!all_lower) {
            all_upper = true;
        } else {
            all_lower = true;
        }
    }

    return all_lower || all_upper;
}