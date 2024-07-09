bool check_dict_case(map<string, string> dict) {
    if (dict.empty())
        return false;

    bool allUpper = true;
    bool allLower = true;

    for (auto& pair : dict) {
        if (!isupper(pair.first[0]) && !islower(pair.first[0]))
            return false;

        if (!allUpper)
            allUpper = isupper(pair.first);
        if (!allLower)
            allLower = islower(pair.first);
    }

    return allUpper || allLower;
}