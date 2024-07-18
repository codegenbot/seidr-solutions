bool check_dict_case(map<string,string> dict){
    if(dict.empty()) return false;
    
    bool all_upper = true;
    bool all_lower = true;
    
    for(auto const& pair : dict){
        string key = pair.first;
        bool is_upper = true;
        bool is_lower = true;
        
        for(char c : key){
            if(!isupper(c)) is_upper = false;
            if(!islower(c)) is_lower = false;
        }
        
        if(!is_upper) all_upper = false;
        if(!is_lower) all_lower = false;
    }
    
    return all_upper || all_lower;
}