bool check_dict_case(map<string, string> dict) {
    if (dict.empty())
        return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        string key = it->first;
        for (char &c : key) {
            c = tolower(c);
        }
        if (!all(key, isupper)) {
            allLower = false;
        }
        for (char &c : key) {
            c = toupper(c);
        }
        if (!all(key, islower)) {
            allUpper = false;
        }
    }

    return allLower || allUpper;
}