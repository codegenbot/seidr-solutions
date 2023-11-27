bool check_map_case(map<string, string> dict) {
    if (dict.empty()) {
        return false;
    }
    
    bool lowercase = true;
    bool uppercase = true;
    
    for (const auto& pair : dict) {
        const string& key = pair.first;
        
        if (!key.empty() && !isalpha(key[0])) {
            return false;
        }
        
        if (!islower(key[0])) {
            lowercase = false;
        }
        
        if (!isupper(key[0])) {
            uppercase = false;
        }
    }
    
    return lowercase || uppercase;
}