Here is the completed code:

bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        string key = pair.first;
        if (!allLower && !allUpper) break;
        if (!allLower) allLower = allUpper = (key[0] >= 'a' && key[0] <= 'z');
        else allLower = allUpper = (key[0] >= 'A' && key[0] <= 'Z');
    }

    return allLower || allUpper;
}