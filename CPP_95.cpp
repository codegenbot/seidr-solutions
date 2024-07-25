bool check_dict_case(map<string, string> dict) {
    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        if (dict.empty()) {
            return false;
        }
        if (!allLower && !allUpper) {
            break;
        }
        if (!islower(pair.first[0]) && !isupper(pair.first[0])) {
            allLower = false;
            allUpper = false;
        } else if (!islower(pair.first[0])) {
            allUpper = false;
        } else {
            allLower = false;
        }
    }

    return allLower || allUpper;
}