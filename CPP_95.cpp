bool check_dict_case(map<string,string> dict){
    if(dict.empty()) return false;
    
    bool all_lowercase = true;
    bool all_uppercase = true;
    
    for(auto const& entry : dict){
        string key = entry.first;
        bool is_lowercase = true;
        bool is_uppercase = true;
        
        for(char c : key){
            if(islower(c)){
                is_uppercase = false;
            } else if(isupper(c)){
                is_lowercase = false;
            } else {
                is_lowercase = false;
                is_uppercase = false;
                break;
            }
        }
        
        all_lowercase = all_lowercase && is_lowercase;
        all_uppercase = all_uppercase && is_uppercase;
    }
    
    return all_lowercase || all_uppercase;
}