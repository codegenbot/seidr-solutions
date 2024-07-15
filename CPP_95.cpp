bool check_dict_case(const map<string, int> &dict) {
    if (dict.empty()) {
        return false;
    }

    bool all_lower = true;
    bool all_upper = true;

    for (const auto &entry : dict) {
        const string &key = entry.first;

        if (!key.empty() && islower(key[0])) {
            all_upper = false;
        } else if (!key.empty() && isupper(key[0])) {
            all_lower = false;
        } else {
            return false;
        }
    }

    return all_lower || all_upper;
}