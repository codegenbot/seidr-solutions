bool check_map_case(map<string, string> dict) {
    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        if (!pair.first.empty()) {
            if (!allLower && !allUpper) break;
            if (!islower(pair.first[0])) allLower = false;
            if (!isupper(pair.first[0])) allUpper = false;
        }
    }

    return dict.empty() || (allLower || allUpper);
}