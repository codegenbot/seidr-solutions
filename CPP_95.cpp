bool check_map_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        string key = pair.first;
        if (!allLower && !allUpper)
            break;
        for (char& c : key) {
            if (isupper(c)) {
                allLower = false;
                break;
            }
            if (islower(c)) {
                allUpper = false;
                break;
            }
        }
    }

    return allLower || allUpper;
}