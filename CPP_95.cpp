bool check_dict_case(map<string,string> dict){
    if(dict.empty())
        return false;
    
    bool all_lower = true;
    bool all_upper = true;
    
    for(auto const& entry : dict){
        string key = entry.first;
        
        if(key.empty() || !all_lower && !all_upper)
            return false;
        
        if(key != string(key.size(), tolower(key[0])))
            all_lower = false;
        
        if(key != string(key.size(), toupper(key[0])))
            all_upper = false;
    }
    
    return all_lower || all_upper;
}