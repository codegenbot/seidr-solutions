Here is the completed code:

bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        string key = pair.first;
        if (!islower(key[0]) && !isupper(key[0])) {
            allLower = false;
            allUpper = false;
            break;
        } else if (!allLower && islower(key[0])) {
            allLower = true;
        } else if (!allUpper && isupper(key[0])) {
            allUpper = true;
        }
    }

    return allLower || allUpper;
}