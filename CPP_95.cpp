bool check_dict_case(map<string, string> dict) {
    bool all_upper = true;
    bool all_lower = true;

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        if (!all_lower && !all_upper)
            return false; // map contains both upper and lower case keys
        if (!all_lower && it->first[0] >= 'A' && it->first[0] <= 'Z')
            all_upper = true;
        else if (!all_upper && (it->first[0] < 'a' || it->first[0] > 'z'))
            all_lower = false;
    }

    return all_lower || all_upper;
}