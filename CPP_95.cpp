bool check_dict_case(map<string, string> dict) {
    if (dict.empty())
        return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        string key = pair.first;
        for (char& c : key) {
            if (!islower(c)) {
                allLower = false;
                break;
            }
            if (!isupper(c)) {
                allUpper = false;
                break;
            }
        }
    }

    return allLower || allUpper;
}