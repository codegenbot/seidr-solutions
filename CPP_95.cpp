bool check_dict_case(map<string, string> dict) {
    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        if (dict.empty()) {
            return false;
        }
        if (!islower(pair.first[0]) && !isupper(pair.first[0])) {
            return false;
        }
        if (!allLower) {
            allUpper = true;
        } else {
            allLower &= islower(pair.first[0]);
            allUpper &= isupper(pair.first[0]);
        }
    }

    return allLower || allUpper;
}