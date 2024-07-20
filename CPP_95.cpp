bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) {
        return false;
    }
    bool allLower = true;
    bool allUpper = true;
    for (auto it = dict.begin(); it != dict.end(); ++it) {
        if (!allLower) {
            allLower = all(it->first).islower();
        }
        if (!allUpper) {
            allUpper = all(it->first).isupper();
        }
    }
    return allLower || allUpper;
}