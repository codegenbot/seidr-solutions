Here is the completed code:

bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;
    bool allLower = true, allUpper = true;
    for (auto& pair : dict) {
        if (!islower(pair.first[0]) && !isupper(pair.first[0])) {
            allLower = false;
            allUpper = false;
            break;
        }
        if (!allLower && !allUpper) break;
        if (!allLower) continue;
        for (char& c : pair.first) {
            if (!islower(c)) {
                allLower = false;
                break;
            }
        }
    }
    return allLower || allUpper;
}