bool check_map_case(map<string, string> dict) {
    bool all_upper = true;
    bool all_lower = true;

    for (auto& pair : dict) {
        if (dict.empty()) return false;
        if (!all_upper && !all_lower) break;
        auto key = pair.first;
        if (!isupper(key[0])) all_upper = false;
        if (!islower(key[0])) all_lower = false;
    }

    return all_upper || all_lower;
}