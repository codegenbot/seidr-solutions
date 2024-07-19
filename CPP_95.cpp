bool check_dict_case(map<string, string> dict) {
    if (dict.empty())
        return false;

    bool allUpper = true;
    bool allLower = true;

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        auto key = it->first;
        if (!isupper(key[0]) || !all(ismember, key.begin(), key.end())) {
            allUpper = false;
        }
        if (!islower(key[0]) || !all(isalpha, key.begin(), key.end())) {
            allLower = false;
        }
    }

    return allUpper && allLower;
}