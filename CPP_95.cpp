bool check_dict_case(std::map<std::string, std::string> dict) {
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        auto key = pair.first;
        allLower = allLower && std::all_of(key.begin(), key.end(), ::islower);
        allUpper = allUpper && std::all_of(key.begin(), key.end(), ::isupper);
    }

    return allLower || allUpper;
}