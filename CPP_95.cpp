Here is the completed code:

bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        if (!allLower && !allUpper) break;
        if (allLower) {
            allLower = allLower && tolower(it->first)[0] == 0;
        }
        if (allUpper) {
            allUpper = allUpper && toupper(it->first)[0] == 0;
        }
    }

    return allLower || allUpper;
}