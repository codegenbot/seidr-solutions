bool check_dict_case(map<string,string> dict){
    if(dict.empty()) return false;
    
    bool all_lower = true;
    bool all_upper = true;
    
    for(auto const& pair : dict){
        string key = pair.first;
        bool is_lower = true;
        bool is_upper = true;
        
        for(char c : key){
            if(islower(c)){
                is_upper = false;
            } else if(isupper(c)){
                is_lower = false;
            }
        }
        
        all_lower = all_lower && is_lower;
        all_upper = all_upper && is_upper;
    }
    
    return all_lower || all_upper;
}