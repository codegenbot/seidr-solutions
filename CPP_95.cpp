Here is the completed code:

bool check_dict_case(map<string, string> dict) {
    if (dict.empty())
        return false;

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        std::string key = it->first;
        bool allUpper = true, allLower = true;
        for (char c : key) {
            if (!isupper(c))
                allUpper = false;
            if (!islower(c))
                allLower = false;
        }
        if (!allUpper && !allLower)
            return false;
    }

    return true;
}