bool check_map_case(map<string, string> dict) {
    if (dict.empty()) {
        return false;
    }

    bool isLowerCase = false;
    bool isUpperCase = false;
    
    for (const auto& pair : dict) {
        const string& key = pair.first;

        if (isupper(key[0])) {
            if (isLowerCase) {
                return false;
            }
            isUpperCase = true;
        } else if (islower(key[0])) {
            if (isUpperCase) {
                return false;
            }
            isLowerCase = true;
        } else {
            return false;
        }
    }

    return true;
}