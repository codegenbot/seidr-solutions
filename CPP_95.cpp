bool check_dict_case(map<string, string> dict) {
    bool allLower = true;
    bool allUpper = true;

    if (dict.empty()) return false;

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        string key = it->first;
        if (!islower(key[0])) {
            allLower = false;
            break;
        }
    }

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        string key = it->first;
        if (!isupper(key[0])) {
            allUpper = false;
            break;
        }
    }

    return allLower || allUpper;
}