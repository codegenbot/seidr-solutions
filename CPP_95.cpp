bool check_dict_case(map<string,string> dict){
    if(dict.empty()) return false;
    
    bool all_lower = true;
    bool all_upper = true;
    
    for(const auto& entry : dict){
        if(entry.first.empty() || entry.second.empty()) return false;
        
        bool is_lower = true;
        bool is_upper = true;
        
        for(char c : entry.first){
            if(!islower(c)){
                is_lower = false;
                break;
            }
        }
        
        for(char c : entry.first){
            if(!isupper(c)){
                is_upper = false;
                break;
            }
        }
        
        if(!is_lower) all_lower = false;
        if(!is_upper) all_upper = false;
    }
    
    return all_lower || all_upper;
}