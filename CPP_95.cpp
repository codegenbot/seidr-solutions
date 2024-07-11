bool check_dict_case(map<string,string> dict){
    if(dict.empty()) return false;
    
    bool all_lowercase = true;
    bool all_uppercase = true;
    
    for(auto const& pair : dict){
        string key = pair.first;
        bool is_lower = true;
        bool is_upper = true;
        
        for(char c : key){
            if(!islower(c)){
                is_lower = false;
            }
            if(!isupper(c)){
                is_upper = false;
            }
        }
        
        if(!is_lower){
            all_lowercase = false;
        }
        if(!is_upper){
            all_uppercase = false;
        }
    }
    
    return all_lowercase || all_uppercase;
}