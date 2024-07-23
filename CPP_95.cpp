bool check_dict_case(map<string,string> dict){
    if(dict.empty()) return false;
    
    bool is_lower = true;
    bool is_upper = true;
    
    for(auto const& pair : dict){
        string key = pair.first;
        
        if(key.empty() || !isalpha(key[0])){
            return false;
        }
        
        if(!islower(key[0])){
            is_lower = false;
        }
        
        if(!isupper(key[0])){
            is_upper = false;
        }
    }
    
    return is_lower || is_upper;
}