bool check_dict_case(map<string, string> dict) {
    bool allLower = true;
    bool allUpper = true;

    for (auto &pair : dict) {
        if (!allLower && !allUpper)
            return false;
        if (isupper(pair.first[0]))
            allLower = false;
        else
            allUpper = false;
    }

    if (dict.empty())
        return false;

    return allLower || allUpper;
}