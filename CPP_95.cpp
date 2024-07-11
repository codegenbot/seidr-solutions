bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto& p : dict) {
        if (!islower(p.first[0]) && !isupper(p.first[0])) {
            return false;
        }
        if (!allLower) allUpper = false;
        if (!allUpper) allLower = false;
    }

    return allLower || allUpper;
}