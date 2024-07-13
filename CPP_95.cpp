bool check_dict_case(map<string, string> dict) {
    if (dict.empty())
        return false;

    bool allUpper = true;
    bool allLower = true;

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        auto key = it->first;
        if (!allUpper && !allLower)
            return false;
        allUpper &= isupper(key[0]);
        allLower &= islower(key[0]);
    }

    return allUpper || allLower;
}