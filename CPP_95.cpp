bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) {
        return false;
    }
    
    bool isLower = false;
    bool isUpper = false;
    
    for (auto it = dict.begin(); it != dict.end(); ++it) {
        string key = it->first;
        
        if (!isLower && islower(key[0])) {
            isLower = true;
        }
        
        if (!isUpper && isupper(key[0])) {
            isUpper = true;
        }
        
        if (isLower && isUpper) {
            return false;
        }
    }
    
    return true;
}