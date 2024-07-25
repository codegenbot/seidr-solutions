bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        if (!islower(it->first[0]) && !isupper(it->first[0])) {
            allLower = false;
            allUpper = false;
            break;
        } else if (allLower) {
            allLower = islower(it->first[0]);
        } else if (allUpper) {
            allUpper = isupper(it->first[0]);
        }
    }

    return allLower || allUpper;
}