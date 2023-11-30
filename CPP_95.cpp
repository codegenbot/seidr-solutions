bool check_map_case(map<string, string> dict) {
    if (dict.empty()) {
        return false;
    }
    
    bool isLowerCase = true;
    bool isUpperCase = true;
    
    for (auto it = dict.begin(); it != dict.end(); ++it) {
        string key = it->first;
        
        for (auto ch: key) {
            if (isalpha(ch) && isupper(ch)) {
                isLowerCase = false;
            } else if (isalpha(ch) && islower(ch)) {
                isUpperCase = false;
            }
        }
    }
    
    return isLowerCase || isUpperCase;
}