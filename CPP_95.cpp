bool check_dict_case(map<string, string> dict) {
    if (dict.empty())
        return false;

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        bool allLower = true;
        bool allUpper = true;
        for (char c : it->first) {
            if (!(islower(c)))
                allLower = false;
            if (!(isupper(c)))
                allUpper = false;
        }
        if (!allLower && !allUpper)
            return false;
    }
    return true;
}