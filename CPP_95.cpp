Here is the completed code:

bool check_dict_case(map<string, string> dict) {
    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        if (dict.empty()) {
            return false;
        }
        string key = pair.first;
        if (!(allLower && islower(0))) {
            allLower = islower(0);
        }
        if (!(allUpper && isupper(0))) {
            allUpper = isupper(0);
        }
    }

    return (allLower || allUpper);
}