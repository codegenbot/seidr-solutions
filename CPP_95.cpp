bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        auto key = it->first;
        if (!islower(key[0]) && !isupper(key[0])) {
            allLower = false;
            allUpper = false;
            break;
        } else if (!allLower && !allUpper) continue;

        for (int i = 1; i < key.length(); ++i) {
            if (!islower(key[i]) && !isupper(key[i])) {
                allLower = false;
                allUpper = false;
                break;
            }
        }

        if (!allLower || !allUpper) break;
    }

    return allLower || allUpper;
}