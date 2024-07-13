Here is the completed code:

bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;
    bool allLower = true, allUpper = true;
    for (auto& p : dict) {
        auto key = p.first;
        if (!islower(key[0])) allLower = false;
        if (!isupper(key[0])) allUpper = false;
    }
    return allLower || allUpper;
}