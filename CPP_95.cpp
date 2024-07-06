Here is the completed code:

bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        string key = pair.first;
        if (!allLower && !allUpper) break;
        if (!allLower) allLower = allToLower(key);
        if (!allUpper) allUpper = allToUpper(key);
    }

    return allLower || allUpper;
}

bool allToLower(string s) {
    for (char& c : s) {
        if (!islower(c)) return false;
    }
    return true;
}

bool allToUpper(string s) {
    for (char& c : s) {
        if (!isupper(c)) return false;
    }
    return true;
}