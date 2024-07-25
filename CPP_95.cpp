bool check_dict_case(map<string, string> dict) {
    bool allLower = true;
    bool allUpper = true;

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        if (!allLower && !allUpper)
            return false;

        string key = it->first;
        for (char &c : key) {
            c = tolower(c);
            if (c != key[0])
                allLower = false;
            c = toupper(c);
            if (c != key[0])
                allUpper = false;
        }
    }

    return allLower || allUpper;
}