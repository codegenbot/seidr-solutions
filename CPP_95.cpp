bool check_dict_case(map<string,string> dict) {
    if (dict.empty()) {
        return false;
    }
    
    bool all_lower = true;
    bool all_upper = true;
    
    for (const auto& pair : dict) {
        string key = pair.first;
        
        bool is_lower = true;
        for (char c : key) {
            if (!islower(c)) {
                is_lower = false;
                break;
            }
        }
        
        bool is_upper = true;
        for (char c : key) {
            if (!isupper(c)) {
                is_upper = false;
                break;
            }
        }
        
        if (!is_lower) {
            all_lower = false;
        }
        
        if (!is_upper) {
            all_upper = false;
        }
    }
    
    return all_lower || all_upper;
}