Here is the completed code:

bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        auto key = pair.first;
        if (!allLower && !allUpper) break;
        if (isupper(key[0])) allLower = false;
        else if (islower(key[0])) allUpper = false;
    }

    return allLower || allUpper;
}