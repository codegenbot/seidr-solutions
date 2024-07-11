bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) {
        return false;
    }
    bool all_lower = true;
    bool all_upper = true;
    for (const auto& entry : dict) {
        if (entry.first != tolower(entry.first[0]) + entry.first.substr(1)) {
            all_lower = false;
        } else if (entry.first != toupper(entry.first[0]) + entry.first.substr(1)) {
            all_upper = false;
        }
    }
    return all_lower || all_upper;
}