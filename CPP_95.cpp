Here is the completed code:

bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        string key = pair.first;
        if (!allLower && !allUpper)
            break;
        if (isupper(key[0])) {
            allLower = false;
        } else {
            allUpper = false;
        }
    }

    return allLower || allUpper;
}