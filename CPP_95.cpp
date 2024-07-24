bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;
    bool allLower = true, allUpper = true;
    for (auto& pair : dict) {
        if (!islower(pair.first[0]) && !isupper(pair.first[0])) {
            allLower = false;
            allUpper = false;
            break;
        } else if (islower(pair.first[0])) {
            allUpper = false;
        } else if (isupper(pair.first[0])) {
            allLower = false;
        }
    }
    return allLower || allUpper;
}