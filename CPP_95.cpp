bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        if (!allLower && !allUpper) break;
        if (allLower) {
            allLower &= it->first[0] >= 'a' && it->first[0] <= 'z';
        }
        if (allUpper) {
            allUpper &= it->first[0] >= 'A' && it->first[0] <= 'Z';
        }
    }

    return allLower || allUpper;
}