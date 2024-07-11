bool check_map_case(map<string, string> dict) {
    bool allLower = true;
    bool allUpper = true;

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        if (!allLower && !allUpper) break;
        if (!allLower) allUpper = true;
        if (!allUpper) allLower = true;
        string key = it->first;
        if ((int)key[0] >= 65) allLower = false;
        else allUpper = false;
    }

    return allLower || allUpper;
}