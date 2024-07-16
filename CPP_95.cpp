Here is the completed code:

bool check_dict_case(map<string, string> dict) {
    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        if (dict.empty()) return false; // map is empty
        if (!islower(pair.first[0]) && !isupper(pair.first[0])) {
            allLower = false;
            allUpper = false;
            break;
        } else if (!allLower && !allUpper) continue;
        allLower &= islower(pair.first[0]);
        allUpper &= isupper(pair.first[0]);
    }

    return allLower || allUpper;
}