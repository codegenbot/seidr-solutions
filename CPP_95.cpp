bool check_dict_case(map<string,string> dict) {
    if (dict.empty()) {
        return false;
    }
    
    bool allLower = true;
    bool allUpper = true;
    for (const auto& pair : dict) {
        string key = pair.first;
        bool isLower = true;
        bool isUpper = true;
        for (char c : key) {
            if (!islower(c)) {
                isLower = false;
            }
            if (!isupper(c)) {
                isUpper = false;
            }
        }
        if (!isLower) {
            allLower = false;
        }
        if (!isUpper) {
            allUpper = false;
        }
    }
    
    return allLower || allUpper;
}