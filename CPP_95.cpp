bool check_dict_case(map<string, string> dict) {
    if (dict.empty())
        return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        string key = it->first;
        if (!allLower && !allUpper)
            break;
        if (islower(key[0])) {
            if (!allLower) {
                return false;
            }
        } else if (isupper(key[0])) {
            if (!allUpper) {
                return false;
            }
        } else {
            allLower = false;
            allUpper = false;
        }
    }

    return allLower || allUpper;
}