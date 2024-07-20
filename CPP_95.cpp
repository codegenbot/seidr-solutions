bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        if (!islower(it->first[0]) && !isupper(it->first[0])) {
            allLower = false;
            allUpper = false;
            break;
        } else if (!allLower && !allUpper) continue;

        bool lowerFound = islower(it->first[0]);
        for (int i = 1; i < it->first.length(); ++i) {
            if ((lowerFound && !islower(it->first[i])) ||
                (!lowerFound && !isupper(it->first[i]))) {
                allLower = false;
                allUpper = false;
                break;
            }
        }

        if (allLower || allUpper) continue;

        return false;
    }

    return allLower || allUpper;
}