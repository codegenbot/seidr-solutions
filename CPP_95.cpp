bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        if (!allLower && !allUpper) break;
        if (!allLower) allUpper = tolower(pair.first).find(' ') == string::npos;
        if (!allUpper) allLower = toupper(pair.first).find(' ') == string::npos;
    }

    return allLower || allUpper;
}