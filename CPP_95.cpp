bool check_map_case(map<string, string> dict) {
    if (dict.empty()) {
        return false;
    }

    bool allLower = true;
    bool allUpper = true;

    for (auto entry : dict) {
        string key = entry.first;
        bool lower = true;
        bool upper = true;

        for (char c : key) {
            if (islower(c)) {
                upper = false;
            } else if (isupper(c)) {
                lower = false;
            } else {
                lower = false;
                upper = false;
                break;
            }
        }

        allLower = allLower && lower;
        allUpper = allUpper && upper;
    }

    return allLower || allUpper;
}