bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;
    bool allLower = true, allUpper = true;
    for (auto& pair : dict) {
        if (!islower(pair.first[0]) && !isupper(pair.first[0])) {
            allLower = allUpper = false;
            break;
        }
        if (pair.second.empty()) return false;
    }
    return allLower || allUpper;
}