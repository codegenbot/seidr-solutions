bool check_dict_case(map<string,string> dict){
    bool all_lower = true;
    bool all_upper = true;
    for (const auto& pair : dict) {
        string key = pair.first;
        bool is_lower = true;
        bool is_upper = true;
        for (char c : key) {
            if (!islower(c)) {
                is_lower = false;
            }
            if (!isupper(c)) {
                is_upper = false;
            }
        }
        all_lower &= is_lower;
        all_upper &= is_upper;
    }
    return dict.empty() ? false : all_lower || all_upper;
}