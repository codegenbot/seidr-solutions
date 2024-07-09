Here is the completed code:

bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        if (!allLower && !allUpper) break;
        if (pair.first[0] >= 'a' && pair.first[0] <= 'z') allLower = true;
        else if (pair.first[0] >= 'A' && pair.first[0] <= 'Z') allUpper = true;
        else {
            allLower = false;
            allUpper = false;
            break;
        }
    }

    return allLower || allUpper;
}