bool check_dict_case(map<string,string> dict){
    if(dict.empty()) return false;
    
    bool all_lower = true;
    bool all_upper = true;
    
    for(auto const& entry : dict){
        string key = entry.first;
        bool has_upper = false;
        bool has_lower = false;
        
        for(char c : key){
            if(isupper(c)){
                has_upper = true;
            } else if(islower(c)){
                has_lower = true;
            }
        }
        
        if(has_upper && has_lower){
            return false;
        }
        
        if(has_upper){
            all_lower = false;
        }
        
        if(has_lower){
            all_upper = false;
        }
    }
    
    return all_lower || all_upper;
}