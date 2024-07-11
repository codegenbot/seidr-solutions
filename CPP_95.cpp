Here is the completed code:

bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        string key = it->first;
        bool all_upper = true;
        bool all_lower = true;

        for (char c : key) {
            if (isupper(c)) {
                all_lower = false;
                break;
            }
            else if (islower(c)) {
                all_upper = false;
                break;
            }
        }

        if ((all_upper && !all_lower) || (!all_upper && all_lower))
            return false;
    }

    return true;
}