Here is the completed code:

bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool all_lower = true;
    bool all_upper = true;

    for (auto& pair : dict) {
        if (!islower(pair.first[0]) && !isupper(pair.first[0])) {
            return false;  // neither lower nor upper case
        }
        if (!all_lower && !all_upper) break;  // no need to check rest

        all_lower &= islower(pair.first[0]);
        all_upper &= isupper(pair.first[0]);
    }

    return all_lower || all_upper;
}