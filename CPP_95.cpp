Here is the completed code:

bool check_dict_case(map<string, string> dict) {
    if (dict.empty())
        return false;

    bool all_lower = true;
    bool all_upper = true;

    for (auto& pair : dict) {
        auto key = pair.first;
        if (!all_lower && !all_upper)
            return false;

        all_lower &= islower(key[0]);
        all_upper &= isupper(key[0]);
    }

    return all_lower || all_upper;
}