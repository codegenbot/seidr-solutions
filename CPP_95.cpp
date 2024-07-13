bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        string key = pair.first;
        if (!islower(key[0])) allLower = false;
        if (!isupper(key[0])) allUpper = false;
    }

    return allLower || allUpper;
}