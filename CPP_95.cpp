bool check_dict_case(map<string, string> dict) {
    if (dict.empty())
        return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        if (!islower(pair.first[0]) && !isupper(pair.first[0])) {
            allLower = false;
            allUpper = false;
            break;
        }
        if (!allLower && !allUpper)
            break;
        if (!allLower) {
            for (char& c : pair.first)
                if (islower(c))
                    return false;
        } else if (!allUpper) {
            for (char& c : pair.first)
                if (isupper(c))
                    return false;
        }
    }

    return allLower || allUpper;
}