bool check_dict_case(map<string,string> dict) {
    if (dict.empty()) {
        return false;
    }

    bool is_lower = true;
    bool is_upper = true;

    for (const auto& entry : dict) {
        string key = entry.first;

        if (!key.empty() && islower(key[0])) {
            is_upper = false;
        } else {
            is_lower = false;
        }
    }

    return is_lower || is_upper;
}