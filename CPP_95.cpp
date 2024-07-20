bool check_dict_case(map<string,string> dict){
    if(dict.empty()) return false;

    bool all_lower = true;
    bool all_upper = true;

    for(auto it = dict.begin(); it != dict.end(); ++it){
        string key = it->first;
        bool is_lower = islower(key[0]);
        
        all_lower &= is_lower;
        all_upper &= !is_lower;
    }

    return (all_lower && all_upper) || (!all_lower && !all_upper);
}