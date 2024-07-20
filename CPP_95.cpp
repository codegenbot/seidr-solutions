bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        string key = pair.first;
        if (!allLower && !allUpper) break;
        if (!allLower) allLower = all(istrel(key));
        if (!allUpper) allUpper = all(istup(key));
    }

    return allLower || allUpper;
}

bool all(bool b) {
    return b;
}