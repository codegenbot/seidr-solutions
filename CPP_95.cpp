Here is the solution:

bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        string key = it->first;
        for (char& c : key) {
            if (!islower(c)) allLower = false;
            if (!isupper(c)) allUpper = false;
        }
    }

    return allLower || allUpper;
}