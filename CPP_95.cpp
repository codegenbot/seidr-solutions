bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        string key = pair.first;
        if (!islower(strtol(key.c_str(), NULL, 10))) {
            allLower = false;
        }
        if (!isupper(strtol(key.c_str(), NULL, 10))) {
            allUpper = false;
        }
    }

    return (allLower && !allUpper) || (!allLower && allUpper);
}