bool check_dict_case(map<string,string> dict){
    if(dict.empty()) return false;
    
    bool all_lower = true;
    bool all_upper = true;
    
    for(auto const& entry : dict){
        if(entry.first.empty() || entry.second.empty()){
            return false;
        }
        
        bool is_lower = true;
        bool is_upper = true;
        
        for(char c : entry.first){
            if(!islower(c)){
                is_lower = false;
            }
            if(!isupper(c)){
                is_upper = false;
            }
        }
        
        all_lower = all_lower && is_lower;
        all_upper = all_upper && is_upper;
    }
    
    return all_lower || all_upper;
}