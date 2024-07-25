Here is the completed code:

bool check_dict_case(map<string, string> dict) {
    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        if (!pair.first.empty()) {
            allLower &= islower(pair.first[0]);
            allUpper &= isupper(pair.first[0]);
        }
    }

    return !dict.empty() && (allLower || allUpper);
}