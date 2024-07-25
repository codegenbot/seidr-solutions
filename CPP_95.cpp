bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;
    bool allLower = true, allUpper = true;
    for (auto& pair : dict) {
        if (!allLower && !allUpper) break;
        if (pair.first.find(' ') != string::npos || pair.second.find(' ') != string::npos)
            return false;
        if (islower(pair.first[0])) allUpper = false;
        else if (isupper(pair.first[0])) allLower = false;
    }
    return allLower || allUpper;
}