Here is the completed code:

bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool all_upper = true;
    bool all_lower = true;

    for (auto& pair : dict) {
        string key = pair.first;
        if (!all_lower && !all_upper) break; // found a mix of cases
        if (!isupper(key[0])) all_upper = false; // not all upper case
        if (!islower(key[0])) all_lower = false; // not all lower case
    }

    return all_upper || all_lower;
}