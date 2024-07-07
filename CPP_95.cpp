bool check_dict_case(map<string, string> dict) {
    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        if (!allLower && !allUpper) break;
        if (pair.first.length() > 0) {
            if (isupper(pair.first[0])) {
                allLower = false;
            } else {
                allUpper = false;
            }
        }
    }

    return allLower || allUpper;
}