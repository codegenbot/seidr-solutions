bool check_dict_case(map<string, string> dict) {
    bool allLower = true;
    bool allUpper = true;

    for (auto &pair : dict) {
        if (!allLower && !allUpper)
            return false;

        if (allLower && !islower(pair.first.begin(), pair.first.end()))
            allLower = false;

        if (allUpper && !isupper(pair.first.begin(), pair.first.end()))
            allUpper = false;
    }

    return allLower || allUpper;
}