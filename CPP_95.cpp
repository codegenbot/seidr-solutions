bool check_dict_case(map<string, string> dict) {
    bool allUpper = true;
    bool allLower = true;

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        if (!allUpper && !allLower)
            return false;  // keys are mixed case

        std::string key = it->first;
        allUpper &= std::all_of(key.begin(), key.end(), ::isupper);
        allLower &= std::all_of(key.begin(), key.end(), ::islower);
    }

    if (dict.empty())
        return false;  // empty map is invalid

    return allUpper || allLower;
}