bool check_dict_case(map<string, string> dict) {
    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        if (pair.first.empty()) return false; // empty key
        if (!allLower && !allUpper) break; // not both lower and upper

        for (char& c : pair.first) {
            if ((c >= 'a' && c <= 'z') != allLower) {
                allLower = false;
                allUpper = true;
                break;
            }
            if ((c >= 'A' && c <= 'Z') != allUpper) {
                allLower = true;
                allUpper = false;
                break;
            }
        }
    }

    return allLower || allUpper;
}