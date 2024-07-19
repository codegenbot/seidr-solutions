bool is_lowercase = true;
    bool is_uppercase = true;
    
    if (dict.empty()) {
        return false;
    }

    for (auto const &entry : dict) {
        for (char c : entry.first) {
            if (!islower(c)) {
                is_lowercase = false;
            }
            if (!isupper(c)) {
                is_uppercase = false;
            }
        }
    }
    
    return is_lowercase || is_uppercase;
}