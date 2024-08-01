bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        if (!allLower && !allUpper) break;
        if (allLower && !islower(pair.first[0])) allLower = false;
        if (allUpper && !isupper(pair.first[0])) allUpper = false;
    }

    return allLower || allUpper;
}