bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto& p : dict) {
        if (!islower(p.first[0]) && !isupper(p.first[0])) {
            allLower = false;
            allUpper = false;
            break;
        } else if (!allLower && islower(p.first[0])) {
            allUpper = false;
        } else if (!allUpper && isupper(p.first[0])) {
            allLower = false;
        }
    }

    return allLower || allUpper;
}