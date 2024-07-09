bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool allUpper = true;
    bool allLower = true;

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        if (!allUpper && !allLower) break;
        if (allUpper) allUpper = tolower(it->first).find((char)0) == string::npos;
        if (allLower) allLower = toupper(it->first).find((char)0) == string::npos;
    }

    return allUpper && allLower ? true : false;
}