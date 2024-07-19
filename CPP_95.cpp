bool check_dict_case(map<string,string> dict) {
    if (dict.empty()) {
        return false;
    }
    
    bool is_lowercase = true;
    bool is_uppercase = true;
    
    for (const auto& entry : dict) {
        for (char c : entry.first) {
            if (!islower(c)) {
                is_lowercase = false;
                break;
            }
        }
        
        for (char c : entry.first) {
            if (!isupper(c)) {
                is_uppercase = false;
                break;
            }
        }
    }
    
    return is_lowercase || is_uppercase;
}