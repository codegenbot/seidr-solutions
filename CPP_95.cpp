bool check_dict_case(map<string,string> dict) {
    if (dict.empty()) {
        return false;
    }
    
    bool isLower = true;
    bool isUpper = true;

    for (const auto& pair : dict) {
        const string& key = pair.first;

        if (!isLower && !isUpper) {
            return false;
        }
        
        if (key.empty()) {
            continue;
        }
        
        if (isLower && !islower(key[0])) {
            isLower = false;
        }
        
        if (isUpper && !isupper(key[0])) {
            isUpper = false;
        }
    }

    return isLower || isUpper;
}