bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto& p : dict) {
        string key = p.first;
        if (!allLower && !allUpper) break;
        if (!allLower) allLower = (key[0] >= 'a' && key[0] <= 'z');
        if (!allUpper) allUpper = (key[0] >= 'A' && key[0] <= 'Z');
    }

    return allLower || allUpper;
}