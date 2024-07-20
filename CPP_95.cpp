bool check_dict_case(map<string, string> dict) {
    bool allLower = true;
    bool allUpper = true;

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        if (!allLower && !allUpper) return false;
        if (allLower && !islower(it->first[0])) allLower = false;
        if (allUpper && isupper(it->first[0])) allUpper = false;
    }

    return allLower || allUpper;
}