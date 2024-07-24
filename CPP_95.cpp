if (dict.empty()) {
        return false;
    }
    
    bool all_lowercase = true;
    bool all_uppercase = true;
    
    for (const auto& kv : dict) {
        if (kv.first.empty() || kv.second.empty()) {
            return false;
        }
        
        for (char c : kv.first) {
            if (!islower(c)) {
                all_lowercase = false;
                break;
            }
        }
        
        for (char c : kv.first) {
            if (!isupper(c)) {
                all_uppercase = false;
                break;
            }
        }
    }
    
    return all_lowercase || all_uppercase;
}