bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool allUpper = true;
    bool allLower = true;

    for (auto& pair : dict) {
        if (!isupper(pair.first[0])) allUpper = false;
        if (!islower(pair.first[0])) allLower = false;
    }

    return allUpper || allLower;
}