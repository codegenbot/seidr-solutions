bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        if (!islower(pair.first[0]) && !isupper(pair.first[0])) {
            return false;
        }
        allLower &= islower(pair.first[0]);
        allUpper &= isupper(pair.first[0]);
    }

    return allLower || allUpper;
}