bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        string key = pair.first;
        if (!allLower && !allUpper) break;
        if (!islower(key[0]) && !isupper(key[0])) {
            allLower = false;
            allUpper = false;
            break;
        }
        allLower &= islower(key[0]);
        allUpper &= isupper(key[0]);
    }

    return allLower || allUpper;
}