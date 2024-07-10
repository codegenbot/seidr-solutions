bool check_dict_case(map<string, string> dict) {
    bool allLower = true;
    bool allUpper = true;

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        if (!islower(it->first[0]) && !isupper(it->first[0])) {
            return false;
        }
        if (!allLower) {
            allUpper = false;
        } else {
            allLower &= islower(it->first[0]);
        }
    }

    return allLower || allUpper;
}