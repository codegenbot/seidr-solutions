bool check_dict_case(map<string,string> dict){
    bool all_upper = true;
    bool all_lower = true;

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        if (!all_upper && !all_lower) break;
        string key = it->first;
        if (!isupper(key[0])) {
            all_upper = false;
        }
        if (!islower(key[0])) {
            all_lower = false;
        }
    }

    return (all_upper || all_lower);
}