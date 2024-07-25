Here is the completed code:

bool check_map_case(map<string, string> dict) {
    if (dict.empty())
        return false;

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        string key = it->first;
        bool allLower = true;
        bool allUpper = true;

        for (char c : key) {
            if ((c >= 'a' && c <= 'z') ? allUpper : (c >= 'A' && c <= 'Z')) {
                allLower = false;
                allUpper = false;
                break;
            }
        }

        if (!allLower && !allUpper)
            return false;
    }

    return true;
}