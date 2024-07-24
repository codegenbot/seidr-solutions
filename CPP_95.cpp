bool check_map_case(map<string,string> dict){
    if(dict.empty()) return false;
    
    bool all_lower = true;
    bool all_upper = true;
    
    for(auto it = dict.begin(); it != dict.end(); ++it){
        string key = it->first;
        bool is_lower = true;
        bool is_upper = true;
        
        for(char c : key){
            if(islower(c)){
                is_upper = false;
            } else if(isupper(c)){
                is_lower = false;
            } else {
                is_lower = false;
                is_upper = false;
                break;
            }
        }
        
        all_lower &= is_lower;
        all_upper &= is_upper;
        
        if(!(all_lower || all_upper)){
            return false;
        }
    }
    
    return true;
}