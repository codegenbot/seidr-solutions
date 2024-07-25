bool check_dict_case(map<string,string> dict){
    bool all_lower = true;
    bool all_upper = true;

    for(auto &pair : dict) {
        if(dict.empty()) return false;
        string key = pair.first;
        if(!all_lower && !all_upper) break;
        if(all_lower) {
            all_lower = all_lower && all_of(key.begin(), key.end(), ::islower);
        }
        if(all_upper) {
            all_upper = all_upper && all_of(key.begin(), key.end(), ::isupper);
        }
    }

    return all_lower || all_upper;
}