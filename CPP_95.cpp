bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (const auto& pair : dict) {
        if (!allLower && !allUpper) break;
        if (!allLower) allLower = islower(pair.first[0]);
        if (!allUpper) allUpper = isupper(pair.first[0]);
    }

    return allLower || allUpper;
}