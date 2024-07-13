bool check_dict_case(map<string, string> dict) {
    bool all_upper = true;
    bool all_lower = true;

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        if (!all_upper && !all_lower)
            return false; // Not all uppercase or lowercase

        if (isupper(it->first[0])) { // Uppercase
            all_lower = false;
        } else { // Lowercase
            all_upper = false;
        }
    }

    return all_upper || all_lower; // Return true if all are same case, false otherwise
}