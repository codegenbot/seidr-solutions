if (dict.empty()) {
        return false;
    }
    bool is_lower = true;
    bool is_upper = true;
    for (auto const& entry : dict) {
        string key = entry.first;
        for (char c : key) {
            if (!islower(c)) {
                is_lower = false;
                break;
            }
        }
        for (char c : key) {
            if (!isupper(c)) {
                is_upper = false;
                break;
            }
        }
    }
    return is_lower || is_upper;
}