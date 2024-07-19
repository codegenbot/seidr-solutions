bool check_dict_case(map<string,string> dict) {
    if (dict.empty()) {
        return false;
    }
    
    bool isLower = true;
    bool isUpper = true;
    
    for (const auto &pair : dict) {
        for (char c : pair.first) {
            if (!islower(c)) {
                isLower = false;
                break;
            }
        }
        
        for (char c : pair.first) {
            if (!isupper(c)) {
                isUpper = false;
                break;
            }
        }
    }
    
    return isLower || isUpper;
}