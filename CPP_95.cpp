Here is the completed code:

bool check_dict_case(map<string, string> dict) {
    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        if (dict.empty()) {
            return false;
        }
        if (!allLower && !allUpper)
            break;
        if (islower(pair.first[0])) {
            allUpper = false;
        } else if (isupper(pair.first[0])) {
            allLower = false;
        } else {
            return false;
        }
    }

    return allLower || allUpper;
}