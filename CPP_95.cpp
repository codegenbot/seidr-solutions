bool check_dict_case(map<string,string> dict){
    if(dict.empty()) return false;
    
    bool lower = true, upper = true;
    for(auto const& pair : dict){
        string key = pair.first;
        if(key.empty() || !isalpha(key[0])) return false;
        if(!islower(key[0])) lower = false;
        if(!isupper(key[0])) upper = false;
    }
    
    return lower || upper;
}