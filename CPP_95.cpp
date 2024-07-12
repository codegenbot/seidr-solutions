bool check_dict_case(map<string,string> dict){
    bool all_lower = true;
    bool all_upper = true;

    for(auto &pair : dict) {
        if(dict.empty()) return false;
        string key = pair.first;
        if(!all_lower && !all_upper) break;
        if(all_lower && !islower(key[0])) all_lower = false;
        if(all_upper && !isupper(key[0])) all_upper = false;
    }

    return all_lower || all_upper;
}