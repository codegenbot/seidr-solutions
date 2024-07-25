Here is the completed code:

bool check_dict_case(map<string, string> dict) {
    if (dict.empty())
        return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto &pair : dict) {
        if (!allLower && !allUpper)
            break;

        string key = pair.first;
        int firstChar = tolower(key[0]);

        allLower &= (firstChar == 0);
        allUpper &= (firstChar == toupper(firstChar));
    }

    return allLower || allUpper;
}