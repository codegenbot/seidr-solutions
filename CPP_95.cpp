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
        } else if (!allUpper) {
            allLower = true;
        }
    }

    return allLower || allUpper;
}