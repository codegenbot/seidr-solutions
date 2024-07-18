bool check_dict_case(map<string,string> dict){
    if(dict.empty()) return false;
    
    bool all_lower = true;
    bool all_upper = true;
    
    for(auto const& entry : dict) {
        string key = entry.first;
        
        if(!key.empty() && !all_lower && !all_upper) return false;
        
        if(key.empty() || key.find_first_not_of("abcdefghijklmnopqrstuvwxyz") != string::npos) return false;
        
        all_lower = all_lower && (key == tolower(key));
        all_upper = all_upper && (key == toupper(key));
    }
    
    return all_lower || all_upper;
}