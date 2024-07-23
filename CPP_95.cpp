bool check_dict_case(std::map<std::string, std::string> dict) {
    if (dict.empty()) return true;

    bool allLower = true;
    bool allUpper = true;

    for (auto& pair : dict) {
        if (islower(pair.first[0])) {
            allLower = true;
            allUpper = false;
        } else if (isupper(pair.first[0])) {
            allUpper = true;
            allLower = false;
        } else {
            return false; 
        }
    }

    return allLower || allUpper;
}