bool check_dict_case(map<string,string> dict) {
    if (dict.empty()) {
        return false;
    }

    bool all_lower = true;
    bool all_upper = true;

    for (const auto& entry : dict) {
        string key = entry.first;
        bool is_lower = true;
        bool is_upper = true;

        for (char c : key) {
            if (!islower(c)) {
                is_lower = false;
            }
            if (!isupper(c)) {
                is_upper = false;
            }
        }

        if (!is_lower) {
            all_lower = false;
        }
        if (!is_upper) {
            all_upper = false;
        }
    }

    if (all_lower || all_upper) {
        return true;
    } else {
        return false;
    }
}