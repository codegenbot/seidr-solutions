bool check_map_case(map<string, string> dict) {
    if (dict.empty())
        return false;

    bool hasLowerCase = true;
    bool hasUpperCase = true;

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        string key = it->first;
        for (char ch : key) {
            if (islower(ch)) {
                hasUpperCase = false;
            } else if (isupper(ch)) {
                hasLowerCase = false;
            }
        }
    }

    return hasLowerCase || hasUpperCase;
}