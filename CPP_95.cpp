Here is the completed code:

bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        string key = pair.first;
        if (!allLower && !allUpper)
            break;
        if (!allLower) {
            allLower = all(std::begin(key), std::end(key), ::tolower);
        }
        if (!allUpper) {
            allUpper = all(std::begin(key), std::end(key), ::toupper);
        }
    }

    return allLower && !allUpper || !allLower && allUpper;
}