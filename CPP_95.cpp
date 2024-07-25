bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;
    bool allUpper = true;
    bool allLower = true;
    for (auto& pair : dict) {
        string key = pair.first;
        if (!allLower && !allUpper) break;
        if (!allLower) allLower = (key == key.toLowerCase());
        if (!allUpper) allUpper = (key == key.toUpperCase());
    }
    return allLower || allUpper;
}