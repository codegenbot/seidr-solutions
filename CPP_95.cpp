bool check_dict_case(map<string,string> dict){
    if(dict.empty()) return false;
    
    bool all_lowercase = true;
    bool all_uppercase = true;
    
    for(auto const& entry : dict){
        string key = entry.first;
        
        if(key.empty() || key.find_first_not_of("abcdefghijklmnopqrstuvwxyz") != string::npos){
            return false;
        }
        
        if(key.find_first_not_of("abcdefghijklmnopqrstuvwxyz") == string::npos){
            all_uppercase = false;
        }
        
        if(key.find_first_not_of("ABCDEFGHIJKLMNOPQRSTUVWXYZ") == string::npos){
            all_lowercase = false;
        }
    }
    
    return all_lowercase || all_uppercase;
}