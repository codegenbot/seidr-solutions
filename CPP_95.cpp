bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        string key = pair.first;
        if (!islower(key[0]) && !isupper(key[0])) {
            allLower = false;
            allUpper = false;
            break;
        }
        if (!allLower && !allUpper) continue;
        if (!allLower) allUpper &= isupper(key[0]);
        if (!allUpper) allLower &= islower(key[0]);
    }

    return allLower || allUpper;
}