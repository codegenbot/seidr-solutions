bool check_dict_case(map<string, string> dict) {
    if (dict.empty())
        return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        if (!allLower && !allUpper)
            break;

        string key = it->first;
        if (!islower(std::tolower(key)[0])) {
            allLower = false;
        }
        if (!isupper(std::toupper(key)[0])) {
            allUpper = false;
        }
    }

    return (allLower && !allUpper) || (!allLower && allUpper);
}