bool check_dict_case(map<string, string> dict) {
    bool all_lower = true;
    bool all_upper = true;

    for (auto& pair : dict) {
        if (!pair.first.empty()) {
            if (all_upper && !isupper(pair.first[0]) ||
                !all_lower && toupper(pair.first[0]) != toupper(pair.second[0])) {
                return false;
            }
        }
    }

    return all_upper || all_lower;
}