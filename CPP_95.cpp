bool check_dict_case(map<string, string> dict) {
    if (dict.empty())
        return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        string key = pair.first;
        if (!allLower && !allUpper)
            return false;
        if (!allLower) {
            allLower = true;
            for (char c : key) {
                if (isupper(c))
                    allLower = false;
            }
        }
        if (!allUpper) {
            allUpper = true;
            for (char c : key) {
                if (islower(c))
                    allUpper = false;
            }
        }
    }

    return allLower || allUpper;
}