bool check_dict_case(map<string, string> dict) {
    bool all_upper = true;
    bool all_lower = true;

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        if (!all_lower && !all_upper) return false;
        auto key = it->first;
        for (char& c : key) {
            c = toupper(c);
        }
        if (find(all_upper ? dict.begin() : dict.end(), all_upper ? dict.end() : dict.begin(),
                key) == dict.end()) {
            return false;
        }
    }

    return true;
}