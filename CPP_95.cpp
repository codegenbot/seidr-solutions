Here is the completed code:

bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;
    bool allLower = true, allUpper = true;
    for (auto it = dict.begin(); it != dict.end(); ++it) {
        if (!islower(it->first[0]) && !isupper(it->first[0])) {
            allLower = false;
            allUpper = false;
            break;
        }
        if (allLower && !islower(it->first[0])) allLower = false;
        if (allUpper && islower(it->first[0])) allUpper = false;
    }
    return allLower || allUpper;