bool lower_case = true;
    bool upper_case = true;
    
    if (dict.empty()) {
        return false;
    }
    
    for (const auto& pair : dict) {
        for (char c : pair.first) {
            if (!islower(c)) {
                lower_case = false;
                break;
            }
        }
        
        for (char c : pair.first) {
            if (!isupper(c)) {
                upper_case = false;
                break;
            }
        }
    }
    
    return lower_case || upper_case;
}