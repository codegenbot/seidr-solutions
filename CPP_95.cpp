bool isLowerCase(const string &str) {
    for (char c : str) {
        if (!islower(c)) return false;
    }
    return true;
}

bool isUpperCase(const string &str) {
    for (char c : str) {
        if (!isupper(c)) return false;
    }
    return true;
}

bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;
    
    auto it = dict.begin();
    bool lower = isLowerCase(it->first);
    bool upper = isUpperCase(it->first);
    
    for (const auto &pair : dict) {
        if (lower && !isLowerCase(pair.first)) return false;
        if (upper && !isUpperCase(pair.first)) return false;
    }
    
    return true;
}