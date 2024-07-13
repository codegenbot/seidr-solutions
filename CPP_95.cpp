Here is the completed code:

bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool allUpper = true;
    bool allLower = true;

    for (auto& pair : dict) {
        if (!allLower && !allUpper) break;

        if (!allLower) continue;

        if (!islower(pair.first[0])) {
            allLower = false;
            allUpper = true;
        } else {
            allUpper = false;
        }
    }

    return allLower || allUpper;
}