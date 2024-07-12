Here is the completed code:

bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto& p : dict) {
        if (!islower(p.first[0])) allLower = false;
        if (!isupper(p.first[0])) allUpper = false;
    }

    return allLower || allUpper;
}