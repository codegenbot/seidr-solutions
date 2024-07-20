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
        } else if (!allLower || !allUpper) {
            continue;
        }
        if (!islower(key[0])) {
            allLower = false;
        } else {
            allUpper = false;
        }
    }
    return allLower || allUpper;
}