bool check_dict_case(map<string,string> dict){
    if(dict.empty()) return false;
    
    bool all_lower = true;
    bool all_upper = true;
    
    for(auto const& pair : dict){
        string key = pair.first;
        
        if(!key.empty() && !all_lower && !all_upper){
            return false;
        }
        
        if(!key.empty() && !islower(key[0])){
            all_lower = false;
        }
        
        if(!key.empty() && !isupper(key[0])){
            all_upper = false;
        }
    }
    
    return all_lower || all_upper;
}