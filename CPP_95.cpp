bool check_dict_case(map<string,string> dict){
    if(dict.empty()) return false;
    
    bool all_lower = true;
    bool all_upper = true;
    
    for(auto const &entry : dict) {
        string key = entry.first;
        
        if(key.empty()) return false;
        
        bool is_lower = true;
        bool is_upper = true;
        
        for(char c : key) {
            if(islower(c)) {
                is_upper = false;
            } else if(isupper(c)) {
                is_lower = false;
            } else {
                is_lower = false;
                is_upper = false;
                break;
            }
        }
        
        if(!is_lower && !is_upper) {
            return false;
        }
        
        all_lower = all_lower && is_lower;
        all_upper = all_upper && is_upper;
    }
    
    return all_lower || all_upper;
}