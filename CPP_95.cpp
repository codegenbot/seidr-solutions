bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        string key = it->first;
        if (!islower(key[0]) && !isupper(key[0])) {
            allLower = false;
            allUpper = false;
            break;
        }
        if ((allLower || allUpper) && (key[0] >= 'a' && key[0] <= 'z')) {
            allUpper = false;
        }
        if ((allLower || allUpper) && (key[0] >= 'A' && key[0] <= 'Z')) {
            allLower = false;
        }
    }

    return allLower || allUpper;
}