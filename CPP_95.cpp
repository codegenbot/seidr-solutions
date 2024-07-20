bool check_dict_case(map<string,string> dict){
    bool all_lower = true;
    bool all_upper = true;

    for(auto it=dict.begin();it!=dict.end();++it){
        if(!all_lower && !all_upper) break;
        string key = it->first;
        if(all_lower) all_lower &= islower(key[0]);
        if(all_upper) all_upper &= isupper(key[0]);
    }

    return (all_lower && dict.empty()) || (all_upper && dict.empty()) ? false : (all_lower || all_upper);
}