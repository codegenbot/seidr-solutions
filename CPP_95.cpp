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
        } else if (!allLower && !allUpper)
            continue;
        else if (!allLower) {
            for (int i = 1; i < pair.first.length(); ++i) {
                if (!islower(pair.first[i]))
                    allLower = false;
                else
                    allUpper = false;
            }
        } else {
            for (int i = 1; i < pair.first.length(); ++i) {
                if (!isupper(pair.first[i]))
                    allUpper = false;
                else
                    allLower = false;
            }
        }
    }

    return allLower || allUpper;
}