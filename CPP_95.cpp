bool check_dict_case(map<string, string> dict) {
    bool allLower = true;
    bool allUpper = true;

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        if (!allLower && !allUpper)
            return false; // If we've already found both upper and lower case keys
        string key = it->first;
        if (!allLower && !islower(key[0])) // Check for first character of the key
            allLower = false;
        if (!allUpper && !isupper(key[0]))
            allUpper = false;
    }

    return allLower || allUpper; // Return true if map is empty or all keys are in one case
}