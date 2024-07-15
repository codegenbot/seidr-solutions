bool check_dict_case(map<string,string> dict){
    if(dict.empty()) return false;
    
    bool all_lower = true;
    bool all_upper = true;
    
    for(const auto& pair : dict){
        string key = pair.first;
        bool is_upper = false;
        bool is_lower = false;
        
        for(char c : key){
            if(isupper(c)) is_upper = true;
            if(islower(c)) is_lower = true;
        }
        
        if(is_upper && is_lower) return false;
        
        if(is_lower) all_upper = false;
        if(is_upper) all_lower = false;
    }
    
    return all_lower || all_upper;
}