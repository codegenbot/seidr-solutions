bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool allUpper = true;
    bool allLower = true;

    for (auto& pair : dict) {
        if (!allUpper && !allLower) break;

        if (!allUpper) {
            allUpper = tolower(pair.first)[0] == toupper(pair.first)[0];
        }
        if (!allLower) {
            allLower = tolower(pair.first)[0] == toupper(pair.first)[0];
        }
    }

    return allUpper || allLower;
}