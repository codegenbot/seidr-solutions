bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        string key = it->first;
        if (!allLower && !allUpper) break;
        for (char &c : key) {
            c = tolower(c);
            if (!allLower) allLower = true;
            c = toupper(c);
            if (!allUpper) allUpper = true;
        }
    }

    return allLower || allUpper;
}