Here is the completed code:

bool check_dict_case(map<string, string> dict) {
    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        if (dict.empty()) {
            return false;
        }
        if (!allLower && !allUpper) {
            return false;
        }
        string key = pair.first;
        if (isupper(key[0])) {
            allLower = false;
        } else if (islower(key[0])) {
            allUpper = false;
        }
    }

    return allLower || allUpper;
}