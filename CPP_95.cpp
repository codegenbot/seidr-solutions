bool check_dict_case(map<string,string> dict){
    if(dict.empty()) return false;

    bool all_upper = true;
    bool all_lower = true;

    for(auto& pair : dict) {
        string key = pair.first;
        string value = pair.second;
        
        if(!all_upper && !all_lower)
            return false;
        
        if(all_upper) {
            all_upper &= isupper(key[0]);
            all_lower &= islower(key[0]);
        }
    }

    return all_upper || all_lower;
}