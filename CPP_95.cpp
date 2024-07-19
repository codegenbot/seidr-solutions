bool check_dict_case(map<string,string> dict){
    if(dict.empty()) return false;
    
    bool all_lower = true;
    bool all_upper = true;
    
    for(auto const& entry : dict){
        string key = entry.first;
        
        bool has_lower = false;
        bool has_upper = false;
        
        for(char c : key){
            if(islower(c)){
                has_lower = true;
            } else if(isupper(c)){
                has_upper = true;
            }
        }
        
        if(has_lower && has_upper){
            return false;
        }
        
        if(has_lower){
            all_upper = false;
        }
        
        if(has_upper){
            all_lower = false;
        }
    }
    
    return all_lower || all_upper;
}