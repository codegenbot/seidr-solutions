bool check_map_case(map<string,string> dict) {
    if (dict.empty()) {
        return false;
    }
    
    bool isLowerCase = true;
    bool isUpperCase = true;
    
    for (auto it = dict.begin(); it != dict.end(); ++it) {
        string key = it->first;
        
        if (key.empty()) {
            return false;
        }
        
        if (!isLowerCase && !isUpperCase) {
            return false;
        }
        
        if (isLowerCase && key != toLowerCase(key)) {
            isLowerCase = false;
        }
        
        if (isUpperCase && key != toUpperCase(key)) {
            isUpperCase = false;
        }
    }
    
    return isLowerCase || isUpperCase;
}