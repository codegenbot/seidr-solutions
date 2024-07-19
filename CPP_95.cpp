Here is the completed code:

bool check_map_case(map<string, string> dict) {
    if (dict.empty())
        return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        string key = pair.first;
        if (!islower(key[0]) && !isupper(key[0])) {
            allLower = false;
            allUpper = false;
            break;
        } else if (!allLower && !allUpper)
            continue;

        for (char c : key) {
            if ((c >= 'a' && c <= 'z') != allLower || (c >= 'A' && c <= 'Z') != allUpper) {
                allLower = false;
                allUpper = false;
                break;
            }
        }

        if (!allLower && !allUpper)
            break;
    }

    return allLower || allUpper;
}