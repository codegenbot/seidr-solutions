bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool all_lower = true;
    bool all_upper = true;

    for (auto& pair : dict) {
        auto key = pair.first;
        if (!islower(key[0]) && !isupper(key[0])) {
            all_lower = false;
            all_upper = false;
            break;
        } else if (!all_lower && !all_upper) {
            continue;
        }
        all_lower &= islower(key[0]);
        all_upper &= isupper(key[0]);
    }

    return (all_lower || all_upper);
}