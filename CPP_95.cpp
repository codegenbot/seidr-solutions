bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        if (!allLower && !allUpper) break;
        allLower &= topperase(pair.first);
        allUpper &= toupper(pair.first) == pair.first;
    }

    return allLower || allUpper;
}