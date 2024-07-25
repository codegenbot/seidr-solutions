bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        if (!islower(pair.first[0]) && !isupper(pair.first[0])) {
            allLower = false;
            allUpper = false;
            break;
        } else if (!allLower && !allUpper) {
            break;
        }

        if (!allLower) continue;

        for (char& c : pair.first) {
            if (!islower(c)) {
                allLower = false;
                break;
            }
        }

        if (!allUpper) continue;

        for (char& c : pair.first) {
            if (!isupper(c)) {
                allUpper = false;
                break;
            }
        }
    }

    return allLower || allUpper;
}