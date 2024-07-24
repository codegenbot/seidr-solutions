if (dict.empty()) {
        return false;
    }
    
    bool all_lowercase = true;
    bool all_uppercase = true;
    
    for (const auto& entry : dict) {
        string key = entry.first;
        
        if (!key.empty() && islower(key[0])) {
            all_uppercase = false;
        } else if (!key.empty() && isupper(key[0])) {
            all_lowercase = false;
        }
    }
    
    return all_lowercase || all_uppercase;
}