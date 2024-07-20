bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        if (!allLower && !allUpper) break;
        if (!allLower) allLower = tolower(pair.first)[0] == toupper(pair.first)[0];
        if (!allUpper) allUpper = tolower(pair.first)[0] == toupper(pair.first)[0];
    }

    return allLower || allUpper;
}