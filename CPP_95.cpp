Here is the completed code:

bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        string key = pair.first;
        if (!islower(key[0])) {
            allLower = false;
            break;
        }
        for (char c : key) {
            if (!islower(c)) {
                allLower = false;
                break;
            }
        }
    }

    for (auto& pair : dict) {
        string key = pair.first;
        if (!isupper(key[0])) {
            allUpper = false;
            break;
        }
        for (char c : key) {
            if (!isupper(c)) {
                allUpper = false;
                break;
            }
        }
    }

    return allLower || allUpper;
}