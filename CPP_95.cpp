Here is the completed code:

bool check_map_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        if (!islower(pair.first[0]) && !isupper(pair.first[0])) {
            allLower = false;
            allUpper = false;
            break;
        } else if ((pair.first[0] >= 'a' && pair.first[0] <= 'z') || (pair.first[0] >= 'A' && pair.first[0] <= 'Z')) {
            if (!allLower) allUpper = true;
            else allLower = true;
        }
    }

    return allLower || allUpper;
}