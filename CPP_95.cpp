bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        if (!islower(it->first[0])) {
            allLower = false;
            break;
        }
    }

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        if (!isupper(it->first[0])) {
            allUpper = false;
            break;
        }
    }

    return allLower || allUpper;
}