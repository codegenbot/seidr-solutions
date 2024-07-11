bool check_dict_case(map<string,string> dict) {
    if(dict.empty()) {
        return false;
    }
    
    bool all_lower = true;
    bool all_upper = true;

    for(const auto& kv : dict) {
        string key = kv.first;
        bool all_lower_char = all_of(key.begin(), key.end(), ::islower);
        bool all_upper_char = all_of(key.begin(), key.end(), ::isupper);

        if(!all_lower_char && !all_upper_char) {
            return false;
        }

        all_lower = all_lower && all_lower_char;
        all_upper = all_upper && all_upper_char;
    }

    return all_lower || all_upper;
}