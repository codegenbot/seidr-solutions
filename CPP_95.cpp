bool check_dict_case(map<string,string> dict) {
    if (dict.empty()) {
        return false;
    }
    
    bool is_all_lower = true;
    bool is_all_upper = true;
    
    for (auto const& pair : dict) {
        for (char c : pair.first) {
            if (!islower(c)) {
                is_all_lower = false;
            }
            if (!isupper(c)) {
                is_all_upper = false;
            }
        }
    }
    
    return is_all_lower || is_all_upper;
}