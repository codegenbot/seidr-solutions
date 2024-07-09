bool check_dict_case(map<string, string> dict) {
    bool all_lower = true, all_upper = true;
    if (dict.empty()) 
        return false;
    for (auto const& elem : dict) {
        for (char c : elem.first) {
            if (!islower(c)) {
                all_lower = false;
                break;
            }
        }
        for (char c : elem.first) {
            if (!isupper(c)) {
                all_upper = false;
                break;
            }
        }
    }
    return all_lower || all_upper;
}