bool check_dict_case(map<string,string> dict){
    if(dict.empty()) return false;
    
    bool is_lower = true;
    bool is_upper = true;
    
    for(auto const& pair : dict){
        string key = pair.first;
        
        if(!key.empty() && islower(key[0])){
            is_upper = false;
        } else if (!key.empty() && isupper(key[0])){
            is_lower = false;
        }
    }
    
    return is_lower || is_upper;
}