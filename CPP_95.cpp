bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        auto key = pair.first;
        if (!allLower && !allUpper) break;
        if (!allLower) allLower = allcaps(key);
        if (!allUpper) allUpper = isupper(key[0]);
    }

    return allLower || allUpper;
}

bool allcaps(string s) {
    for (char& c : s)
        c = toupper(c);
    return true;
}