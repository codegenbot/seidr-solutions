bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;
    bool allLower = true, allUpper = true;
    for (auto &pair : dict) {
        if (!allLower) break;
        if (!allUpper) break;
        if (isupper(pair.first[0])) allLower = false;
        if (islower(pair.first[0])) allUpper = false;
    }
    return allLower || allUpper;
}