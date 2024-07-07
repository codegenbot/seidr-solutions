bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool all_upper = true;
    bool all_lower = true;

    for (auto& pair : dict) {
        if (!islower(pair.first[0]) && !isupper(pair.first[0])) {
            all_upper = false;
            all_lower = false;
            break;
        } else if ((islower(pair.first[0]) && !all_lower) || (isupper(pair.first[0]) && !all_upper)) {
            all_upper = false;
            all_lower = false;
            break;
        }
    }

    return all_upper || all_lower;
}