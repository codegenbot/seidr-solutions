bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        if (!allLower && !allUpper) break;
        if (allLower) {
            allLower &= tolower(it->first).find_first_not_of('a'-'z') == string::npos;
        }
        if (allUpper) {
            allUpper &= toupper(it->first).find_first_not_of('A'-'Z') == string::npos;
        }
    }

    return allLower || allUpper;
}