bool check_dict_case(map<string, string> dict) {
    if (dict.empty())
        return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        if (!allLower && !allUpper)
            return false;

        auto key = it->first;
        if (!islower(key[0])) {
            allLower = false;
            for (int i = 1; i < key.size(); ++i) {
                if (!isupper(key[i]))
                    return false;
            }
        } else {
            for (int i = 0; i < key.size(); ++i) {
                if (!islower(key[i]))
                    return false;
            }
        }
    }

    return allLower || allUpper;
}