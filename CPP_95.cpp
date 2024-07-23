bool check_dict_case(map<string,string> dict){
    if(dict.empty()) return false;
    
    bool all_lowercase = true;
    bool all_uppercase = true;
    
    for(auto const& pair : dict){
        string key = pair.first;
        bool is_lowercase = true;
        bool is_uppercase = true;
        
        for(char c : key){
            if(!islower(c)){
                is_lowercase = false;
            }
            if(!isupper(c)){
                is_uppercase = false;
            }
        }
        
        if(!is_lowercase){
            all_lowercase = false;
        }
        if(!is_uppercase){
            all_uppercase = false;
        }
    }
    
    return all_lowercase || all_uppercase;
}