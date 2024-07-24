Here is the completed code:

bool check_dict_case(map<string, string> dict) {
    bool allLower = true;
    bool allUpper = true;

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        if (!allLower && !allUpper)
            return false;

        if (allLower) {
            if (it->first.find((char)toupper(it->first[0])) != 0)
                allLower = false;
        } else {
            if (it->first.find((char)tolower(it->first[0])) != 0)
                allUpper = false;
        }
    }

    return allLower || allUpper;
}