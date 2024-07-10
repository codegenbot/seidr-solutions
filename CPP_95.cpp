bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        if (!islower(pair.first[0]) && !isupper(pair.first[0])) {
            allLower = false;
            allUpper = false;
            break;
        } else if (!allLower || !allUpper) {
            continue;
        }

        if (islower(pair.first[0]))
            allLower &= islower(pair.second[0]);
        else
            allUpper &= isupper(pair.second[0]);

        if (!allLower && !allUpper)
            break;
    }

    return allLower || allUpper;
}