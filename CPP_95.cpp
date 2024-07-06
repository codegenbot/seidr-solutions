bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        string key = pair.first;
        if (!allLower && !allUpper) break;
        if (!allLower) {
            allLower = all(Lower(key).begin(), Lower(key).end());
        }
        if (!allUpper) {
            allUpper = all(Upper(key).begin(), Upper(key).end());
        }
    }

    return allLower || allUpper;
}