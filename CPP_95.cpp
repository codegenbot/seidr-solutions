Here is the completed code:

bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        if (!allLower && !allUpper) break;
        if (allLower) {
            allLower &= islower(it->first[0]);
        }
        if (allUpper) {
            allUpper &= isupper(it->first[0]);
        }
    }

    return allLower || allUpper;
}