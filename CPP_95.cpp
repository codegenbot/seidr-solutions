bool check_dict_case(map<string, string> dict) {
    if (dict.empty())
        return false;

    bool allUpper = true;
    bool allLower = true;

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        if (!allUpper && !allLower)
            return false;

        if (!allUpper) {
            if (!(it->first).find((char)32) == string::npos)
                allUpper = false;
        }

        if (!allLower) {
            for (char& c : it->first)
                if (c >= 'A' && c <= 'Z')
                    allLower = false;
        }
    }

    return allUpper || allLower;
}