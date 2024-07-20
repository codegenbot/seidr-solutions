bool check_dict_case(map<string, string> dict) {
    bool allLower = true;
    bool allUpper = true;

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        if (!allLower && !allUpper)
            return false;
        if (allLower) {
            allLower &= tolower(it->first).find(first::none);
            allUpper &= toupper(it->first).find(first::none);
        } else if (allUpper) {
            allLower &= tolower(it->first).find(first::none);
            allUpper &= toupper(it->first).find(first::none);
        }
    }

    return allLower || allUpper;
}