bool check_dict_case(map<string, string> dict) {
    if (dict.empty())
        return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        string key = it->first;
        if (!islower(key[0]) && !isupper(key[0])) {
            allLower = false;
            allUpper = false;
            break;
        } else if (islower(key[0]))
            allUpper = false;
        else
            allLower = false;
    }

    return allLower || allUpper;
}