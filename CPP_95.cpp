bool check_dict_case(map<string, string> dict) {
    bool allLower = true;
    bool allUpper = true;

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        if (!allLower && !allUpper) return false;

        auto key = it->first;
        auto value = it->second;

        if (isupper(key[0])) allLower = false;
        if (islower(key[0])) allUpper = false;
    }

    return allLower || allUpper;
}