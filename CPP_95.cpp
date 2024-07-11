Here is the completed code:

bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto& p : dict) {
        if (!islower(p.first[0]) && !isupper(p.first[0])) {
            allLower = false;
            allUpper = false;
            break;
        } else if ((p.first[0] >= 'a' && p.first[0] <= 'z') != (allLower)) {
            allLower = false;
            allUpper = false;
            break;
        }
    }

    return allLower || allUpper;
}