bool check_dict_case(map<string,string> dict){
    if(dict.empty()) return false;
    
    bool all_lower = true;
    bool all_upper = true;
    
    for(auto const& entry : dict){
        string key = entry.first;
        
        if(key.empty() || !isalpha(key[0])) return false;
        
        if(key != tolower(key)) all_lower = false;
        if(key != toupper(key)) all_upper = false;
    }
    
    return all_lower || all_upper;
}