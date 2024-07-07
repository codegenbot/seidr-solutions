bool check_map_case(map<string, string> dict) {
    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        if (dict.empty()) {
            return false;
        }
        string key = pair.first;
        if (!islower(key[0]) && !isupper(key[0])) {
            return false;
        }
        if (!allLower) allUpper = true;
        allLower &= islower(key[0]);
        allUpper &= isupper(key[0]);
    }

    return allLower || allUpper;
}