bool check_dict_case(map<string,string> dict) {
    if (dict.empty()) {
        return false;
    }
    
    bool lower_case = true;
    bool upper_case = true;
    
    for (const auto& entry : dict) {
        for (char c : entry.first) {
            if (!islower(c)) {
                lower_case = false;
                break;
            }
        }
        
        for (char c : entry.first) {
            if (!isupper(c)) {
                upper_case = false;
                break;
            }
        }
    }
    
    return lower_case || upper_case;
}