Here is the completed code:

bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;
    bool allLower = true, allUpper = true;
    for (const auto& pair : dict) {
        if (!islower(pair.first[0]) && !isupper(pair.first[0])) {
            allLower = false; allUpper = false; break;
        }
        allLower &= islower(pair.first[0]);
        allUpper &= isupper(pair.first[0]);
    }
    return (allLower || allUpper);
}