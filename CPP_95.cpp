bool check_dict_case(map<string, string> dict) {
    if (dict.empty())
        return false;

    bool allUpper = true;
    bool allLower = true;

    for (auto it = dict.begin(); it != dict.end(); it++) {
        if (!islower(it->first[0]) && !isupper(it->first[0]))
            return false;  // Not a letter, so not in lower or upper case

        if (!allUpper)
            continue;

        allUpper &= isupper(it->first[0]);
    }

    for (auto it = dict.begin(); it != dict.end(); it++) {
        if (!islower(it->first[0]) && !isupper(it->first[0]))
            return false;  // Not a letter, so not in lower or upper case

        if (!allLower)
            continue;

        allLower &= islower(it->first[0]);
    }

    return allUpper || allLower;
}