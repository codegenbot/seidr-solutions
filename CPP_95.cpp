bool check_map_case(map<string, string> dict) {
    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        if (pair.first.length() > 0 && !isupper(pair.first[0])) {
            allUpper = false;
        }
        if (pair.second.length() > 0 && !islower(pair.second[0])) {
            allLower = false;
        }
    }

    return allLower || allUpper;
}