bool check_dict_case(std::map<std::string, std::string> dict) {
    if (dict.empty()) return true;

    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        allLower &= islower(pair.first[0]);
        allUpper &= isupper(pair.first[0]);
    }

    return allLower || allUpper;
}