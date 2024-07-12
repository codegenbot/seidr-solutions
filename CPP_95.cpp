bool check_dict_case(map<string, string> dict) {
    if (dict.empty())
        return false;

    for (auto &pair : dict) {
        string key = pair.first;
        bool allLower = true;
        bool allUpper = true;

        for (char c : key) {
            if (isupper(c)) {
                allLower = false;
                break;
            } else if (islower(c)) {
                allUpper = false;
                break;
            }
        }

        if (!allLower && !allUpper)
            return false;
    }

    return true;
}