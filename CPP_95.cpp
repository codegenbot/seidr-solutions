bool check_dict_case(map<string, string> dict) {
    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        if (pair.first.empty()) {
            return false;
        }
        if (!islower(pair.first[0]) && !isupper(pair.first[0])) {
            allLower = false;
            allUpper = false;
            break;
        } else if (allLower && !islower(pair.first[0])) {
            allLower = false;
        } else if (allUpper && islower(pair.first[0])) {
            allUpper = false;
        }
    }

    return allLower || allUpper;
}