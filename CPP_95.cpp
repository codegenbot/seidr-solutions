bool check_dict_case(map<string, string> dict) {
    bool allLower = true;
    bool allUpper = true;

    if (dict.empty()) {
        return false;
    }

    for (auto& pair : dict) {
        if (!islower(pair.first[0]) && !isupper(pair.first[0])) {
            allLower = false;
            allUpper = false;
            break;
        } else if (isupper(pair.first[0])) {
            allLower = false;
        } else {
            allUpper = false;
        }
    }

    return allLower || allUpper;
}