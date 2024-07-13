bool check_dict_case(map<string, string> dict) {
    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        if (dict.empty()) return false; // Check if the map is empty
        if (!islower(pair.first[0]) && !isupper(pair.first[0])) {
            allLower = false;
            allUpper = false;
            break;
        } else if (!allLower && !allUpper) continue;
        allLower = allUpper = (islower(pair.first[0]));
    }

    return allLower || allUpper;
}