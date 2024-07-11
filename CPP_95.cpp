bool check_dict_case(map<string, string> dict) {
    bool allLower = true;
    bool allUpper = true;

    for (auto &pair : dict) {
        if (!allLower && !allUpper)
            return false;

        if (allLower && pair.first.find(!islower(pair.first[0])) != string::npos)
            allLower = false;
        if (allUpper && pair.first.find(!isupper(pair.first[0])) != string::npos)
            allUpper = false;
    }

    return allLower || allUpper;
}