bool check_dict_case(map<string,string> dict){
    if(dict.empty()) return false;
    
    bool all_lower = true;
    bool all_upper = true;
    
    for(auto const& entry : dict){
        string key = entry.first;
        
        if(key.empty() || key.find_first_not_of("abcdefghijklmnopqrstuvwxyz") != string::npos){
            return false;
        }
        
        if(key.find_first_not_of("abcdefghijklmnopqrstuvwxyz") == string::npos){
            all_upper = false;
        }
        
        if(key.find_first_not_of("ABCDEFGHIJKLMNOPQRSTUVWXYZ") == string::npos){
            all_lower = false;
        }
    }
    
    return all_lower || all_upper;
}