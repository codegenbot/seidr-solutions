bool check_dict_case(map<string, string> dict) {
    bool allLower = true;
    bool allUpper = true;

    for (const auto& pair : dict) {
        if (pair.first.empty()) return false; // Check if key is empty
        if (!allLower && !allUpper) break; // If not all keys are in same case, stop checking

        if (islower(pair.first[0])) {
            allUpper = false;
        } else {
            allLower = false;
        }
    }

    return allLower || allUpper;
}